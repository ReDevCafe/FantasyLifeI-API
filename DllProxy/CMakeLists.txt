cmake_minimum_required(VERSION 3.16)
project(DllProxy LANGUAGES CXX C)

add_library(${PROJECT_NAME} SHARED src/dllmain.cpp) 

set_target_properties(${PROJECT_NAME} PROPERTIES
    OUTPUT_NAME "version"
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED YES
    LINK_FLAGS "/DEF:${CMAKE_CURRENT_SOURCE_DIR}/version_proxy.def"
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
target_compile_definitions(${PROJECT_NAME} PRIVATE WIN32_LEAN_AND_MEAN)
target_link_libraries(${PROJECT_NAME} PUBLIC
    user32
    kernel32
    shlwapi
)

file(GLOB_RECURSE PROJECT_SOURCE "src/*.cpp")

target_sources(${PROJECT_NAME} PUBLIC
    ${PROJECT_SOURCE}
)

CMAKE_MINIMUM_REQUIRED(VERSION 3.6)
PROJECT(FantasyLifeI-ModLoader LANGUAGES CXX C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_subdirectory(DllProxy)

add_library(${PROJECT_NAME} SHARED src/dllmain.cpp) 

set_target_properties(${PROJECT_NAME} PROPERTIES
    OUTPUT_NAME "ModLoader"
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED YES
)

if (MSVC)
    add_compile_options(/wd4309 /wd639)
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    user32
    kernel32
)

file(GLOB_RECURSE PROJECT_SOURCE "src/*.cpp")

target_sources(${PROJECT_NAME} PUBLIC
    ${PROJECT_SOURCE}
)


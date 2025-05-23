CMAKE_MINIMUM_REQUIRED(VERSION 3.6)
PROJECT(DllProxy LANGUAGES CXX C)

add_library(${PROJECT_NAME} SHARED src/dllmain.cpp) 

set_target_properties(${PROJECT_NAME} PROPERTIES
    OUTPUT_NAME "version"
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /MT /EHsc /DWIN32_LEAN_AND_MEAN)
    set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "/DEF:${CMAKE_CURRENT_SOURCE_DIR}/version_proxy.def")
endif()

target_precompile_headers(${PROJECT_NAME} 
    PUBLIC
        include/pch.h
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    user32
    kernel32
)

file(GLOB_RECURSE PROJECT_SOURCE "src/*.cpp")

target_sources(${PROJECT_NAME} PUBLIC
    ${PROJECT_SOURCE}
)

cmake_minimum_required(VERSION 3.16)
project(FantasyLifeI-ModLoader LANGUAGES CXX C)

set(VERSION 1.00)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreadedDLL")
option(MLDEBUG "Enable ModLoader debug code" ON)

add_subdirectory(DllProxy)
add_library(${PROJECT_NAME} SHARED)
add_library(${PROJECT_NAME} SHARED)

set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "ModLoader" CXX_STANDARD 20 CXX_STANDARD_REQUIRED YES)
target_compile_definitions(${PROJECT_NAME} PRIVATE MLCOMPILED MLVERSION=${VERSION})

if(MLDEBUG)
    target_compile_definitions(${PROJECT_NAME} PRIVATE MLDEBUG)
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Zi")
    set(CMAKE_SHARED_LINKER_FLAGS_RELEASE "${CMAKE_SHARED_LINKER_FLAGS_RELEASE} /DEBUG")
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    target_compile_options(${PROJECT_NAME} PRIVATE 
        "-Wno-inconsistent-dllimport"
        "-Wno-dllimport-static-field-def"
        /EHsc /GS /MD
    )
endif()

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME} PRIVATE user32 kernel32)

file(GLOB_RECURSE PROJECT_SOURCE "src/*.cpp")
target_sources(${PROJECT_NAME} PUBLIC src/Lib/miniz.c ${PROJECT_SOURCE})
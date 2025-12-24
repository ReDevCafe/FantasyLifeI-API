cmake_minimum_required(VERSION 3.16)
project(FantasyLifeI-ModLoader LANGUAGES CXX C)

set(VERSION 1.00)
option(MLDEBUG "Enable ModLoader debug code" ON)

add_subdirectory(DllProxy)
add_library(${PROJECT_NAME} SHARED src/ModLoader.cpp)

set_target_properties(${PROJECT_NAME} PROPERTIES
    OUTPUT_NAME "ModLoader"
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED YES
)

target_compile_definitions(${PROJECT_NAME} PRIVATE MLCOMPILED)
target_compile_definitions(${PROJECT_NAME} PRIVATE MLVERSION=${VERSION})

if(MLDEBUG)
    target_compile_definitions(${PROJECT_NAME} PRIVATE MLDEBUG)
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Zi")
    set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} /DEBUG")
    set(CMAKE_SHARED_LINKER_FLAGS_RELEASE "${CMAKE_SHARED_LINKER_FLAGS_RELEASE} /DEBUG")

    if(MSVC)
        target_compile_options(FantasyLifeI-ModLoader PRIVATE /wd4369 /wd4309)
    endif()
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    user32
    kernel32
)

target_sources(${PROJECT_NAME} PRIVATE src/Lib/miniz.c)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/miniz)
target_compile_definitions(${PROJECT_NAME} PRIVATE MZ_ZIP_READER_ONLY)

file(GLOB_RECURSE PROJECT_SOURCE "src/*.cpp")
target_sources(${PROJECT_NAME} PUBLIC
    ${PROJECT_SOURCE}
)
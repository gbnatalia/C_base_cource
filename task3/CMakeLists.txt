cmake_minimum_required(VERSION 3.23)
project(c_10_task3)

macro(use_c99)
    if (CMAKE_VERSION VERSION_LESS "3.1")
        if (CMAKE_C_COMPILER_ID STREQUAL "GNU")
            set (CMAKE_C_FLAGS "-std=gnu99 ${CMAKE_C_FLAGS}")
        endif ()
    else ()
        set (CMAKE_C_STANDARD 99)
    endif ()
endmacro(use_c99)

set(OUTPUT_DIR  ${CMAKE_SOURCE_DIR}/../bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})

add_executable(c_10_task3 task3.c)

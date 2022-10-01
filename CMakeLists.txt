cmake_minimum_required(VERSION 3.8)

project(xgit VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

string(TIMESTAMP BUILD_DATE "%Y-%m-%d")
string(TIMESTAMP BUILD_TIME "%H:%M:%S")

add_executable(
    xgit
    main.cpp
)

add_custom_command(
    TARGET xgit
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_SOURCE_DIR}/src $<TARGET_FILE_DIR:xgit>/src
)

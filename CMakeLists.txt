cmake_minimum_required(VERSION 4.0.2)
project(
    planning
    VERSION 1.0.0
    DESCRIPTION "a demo of planning"
    HOMEPAGE_URL "https://github.com/Gro-sen/cmake_planning_last_test"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

#变量和目录设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)

#添加子目录
add_subdirectory(src)

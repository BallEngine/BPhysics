﻿# CMakeList.txt: BPhysics 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

include_directories (../BPhysics)
link_directories (../BPhysics)

# 将源代码添加到此项目的可执行文件。
add_executable (Console "Console.h" "Console.cpp")

target_link_libraries(Console "BPhysics")

# TODO: 如有需要，请添加测试并安装目标。

cmake_minimum_required(VERSION 3.7)
project(GoodCodeEddy)

set(CMAKE_CXX_STANDARD 11)

# 编译google test，会在当前目录生成libtest.a动态库
add_subdirectory(./googletest)
# 将用于google test的头文件gtest.h添加到include路径中
include_directories(./googletest/include)
# 将libtest.a添加到链接路径中（同时需要添加googletest运行需要的pthread）
link_directories(./googletest)
set(LIBRARIES
        test
        pthread)

set(SOURCE_FILES main.cpp)
add_executable(GoodCodeEddy ${SOURCE_FILES})
target_link_libraries(GoodCodeEddy ${LIBRARIES})

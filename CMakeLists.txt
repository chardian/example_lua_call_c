cmake_minimum_required(VERSION 3.10)
project(MyLib)
# 设置C标准（可选）
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(/usr/include/lua5.3)
add_library(mylib SHARED my_lib.c)

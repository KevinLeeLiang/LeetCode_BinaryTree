cmake_minimum_required(VERSION 3.17)
project(BinaryTree)

set(CMAKE_CXX_STANDARD 17)
include_directories(util)
add_executable(BinaryTree main.cpp util/util.h test_factory.h L94_inorderTraversal/L94_inorderTraversal.cpp L94_inorderTraversal/L94_inorderTraversal.h L95_generateTrees/L95_generateTrees.cpp L95_generateTrees/L95_generateTrees.h)
cmake_minimum_required(VERSION 3.9)
project(Algorithms)

set(CMAKE_C_STANDARD 99)

set(BTree BTree/BinaryTree.cpp BTree/BinaryTree.h BTree/Test_BinaryTree.cpp)
set(LCSRTree LCSRTree/LCSRTree.cpp LCSRTree/LCSRTree.h LCSRTree/Test_LCSRTree.cpp)
set(LinkedList LinkedList/LinkedList.c LinkedList/LinkedList.h LinkedList/Test_LinkedList.c)
add_executable(LCSRTree ${LCSRTree})
add_executable(LinkedList ${LinkedList})
add_executable(BTree ${BTree})
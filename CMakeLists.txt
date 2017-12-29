cmake_minimum_required(VERSION 3.9)
project(Algorithms)

set(CMAKE_C_STANDARD 99)

set(BTree Tree/BTree/BinaryTree.cpp Tree/BTree/BinaryTree.h Tree/BTree/Test_BinaryTree.cpp)
set(LCSRTree Tree/LCSRTree/LCSRTree.cpp Tree/LCSRTree/LCSRTree.h Tree/LCSRTree/Test_LCSRTree.cpp)
set(LinkedList LinkedList/LinkedList.c LinkedList/LinkedList.h LinkedList/Test_LinkedList.c)

add_executable(DSet ${Dset} DisjointSet/DisjointSet.cpp DisjointSet/DisjointSet.h DisjointSet/Test_DisjoinSet.cpp)
add_executable(ETree Tree/ExpressionTree/ExpressionTree.h Tree/ExpressionTree/ExPressionTree.cpp Tree/ExpressionTree/Test_Expression.cpp)
add_executable(LCSRTree ${LCSRTree})
add_executable(LinkedList ${LinkedList})
add_executable(BTree ${BTree})
add_executable(BubbleTree Sort/BubbleSort/BubbleSort.cpp)
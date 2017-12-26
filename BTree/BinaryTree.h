//
// Created by J.H.Park on 2017-12-21.
//

#ifndef TREE_BINARYTREE_H
#define TREE_BINARYTREE_H

#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;

typedef struct tagSBTNode
{
    tagSBTNode *getLeft() const;

    void setLeft(tagSBTNode *Left);

    struct tagSBTNode* Left;
    struct tagSBTNode* Right;

    ElementType Data;
}SBTNode;

SBTNode* SBT_CreateNode(ElementType NewData);
void SBT_DestroyNode(SBTNode *Node);
void SBT_DestroyTree(SBTNode *Root);

void SBT_PreorderPrintTree(SBTNode *Node);
void SBT_InorderPrintTree(SBTNode *Node);
void SBT_PostorderPrintTree(SBTNode *Node);

#endif //TREE_BINARYTREE_H

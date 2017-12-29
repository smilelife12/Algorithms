//
// Created by J.H.Park on 2017-12-21.
//

#ifndef TREE_LCSRTREE_H
#define TREE_LCSRTREE_H

#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;

typedef struct tagLCSRNode
{
    struct tagLCSRNode *LeftChild;
    struct tagLCSRNode *RightSibling;

    ElementType Data;
} LCSRNode;

LCSRNode* LCSR_CreateNode( ElementType NewData);
void LCSR_DestroyNode(LCSRNode *Node);
void LCSR_DestoyTree(LCSRNode *Root);

void LCSR_AddChildNode(LCSRNode* ParentNode, LCSRNode *ChildNode);
void LCSR_PrintTree(LCSRNode *Node, int Depth);

#endif //TREE_LCSRTREE_H

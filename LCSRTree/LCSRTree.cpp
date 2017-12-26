//
// Created by J.H.Park on 2017-12-21.
//

#include "LCSRTree.h"

LCSRNode *LCSR_CreateNode(ElementType NewData) {
    LCSRNode* NewNode = (LCSRNode*)malloc(sizeof(LCSRNode));
    NewNode->LeftChild = NULL;
    NewNode->RightSibling = NULL;
    NewNode->Data = NewData;

    return  NewNode;
}

void LCSR_DestroyNode(LCSRNode *Node) {
    free(Node);

}

void LCSR_AddChildNode(LCSRNode *ParentNode, LCSRNode *ChildNode) {
    if(ParentNode->LeftChild == NULL)
    {
        ParentNode -> LeftChild = ChildNode;
    }
    else
    {
        LCSRNode* TempNode = ParentNode->LeftChild;
        while (TempNode->RightSibling !=NULL)
            TempNode = TempNode->RightSibling;

        TempNode ->RightSibling = ChildNode;
    }

}

void LCSR_PrintTree(LCSRNode *Node, int Depth) {

    int i = 0;

    for (i = 0; i < Depth; i++)
        printf(" ");

    printf("%c\n", Node->Data);

    if(Node->LeftChild != NULL)
        LCSR_PrintTree(Node->LeftChild, Depth+1);

    if(Node->RightSibling != NULL)
        LCSR_PrintTree(Node->RightSibling, Depth);

}

void LCSR_DestoyTree(LCSRNode *Root) {

    if(Root->RightSibling !=NULL)
        LCSR_DestoyTree(Root->RightSibling);

    if(Root->LeftChild != NULL)
        LCSR_DestoyTree(Root->LeftChild);

    Root->LeftChild = NULL;
    Root->RightSibling = NULL;

    LCSR_DestroyNode(Root);

}

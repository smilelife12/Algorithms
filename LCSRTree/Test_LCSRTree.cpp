//
// Created by J.H.Park on 2017-12-21.
//
#include "LCSRTree.h"

int main(void)
{

    LCSRNode *Root = LCSR_CreateNode('A');
    LCSRNode *B = LCSR_CreateNode('B');
    LCSRNode *C = LCSR_CreateNode('C');
    LCSRNode *D = LCSR_CreateNode('D');
    LCSRNode *E = LCSR_CreateNode('E');
    LCSRNode *F = LCSR_CreateNode('F');
    LCSRNode *G = LCSR_CreateNode('G');
    LCSRNode *H = LCSR_CreateNode('H');
    LCSRNode *I = LCSR_CreateNode('I');
    LCSRNode *J = LCSR_CreateNode('J');
    LCSRNode *K = LCSR_CreateNode('K');

    LCSR_AddChildNode(Root, B);
        LCSR_AddChildNode(B, C);
        LCSR_AddChildNode(B, D);
            LCSR_AddChildNode(D, E);
            LCSR_AddChildNode(D, F);
    LCSR_AddChildNode(Root, G);
        LCSR_AddChildNode(G, H);
    LCSR_AddChildNode(Root, I);
        LCSR_AddChildNode(I,J);
            LCSR_AddChildNode(J, K);

    LCSR_PrintTree(Root, 0);

    LCSR_DestoyTree(Root);
}

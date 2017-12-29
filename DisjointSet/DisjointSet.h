//
// Created by J.H.Park on 2017-12-29.
//
#include <stdio.h>
#include <stdlib.h>

#ifndef ALGORITHMS_DISJOINTSET_H
#define ALGORITHMS_DISJOINTSET_H

typedef struct tagDisjointSet
{
    struct tagDisjointSet* Parent;
    void* Data;

}DisjointSet;

void DS_UnionSet(DisjointSet* Set1, DisjointSet* Set2);
DisjointSet* DS_FindSet(DisjointSet* Set);
DisjointSet* DS_MakeSet(void* NewData);
void DS_DestroySet(DisjointSet* Set);

#endif //ALGORITHMS_DISJOINTSET_H

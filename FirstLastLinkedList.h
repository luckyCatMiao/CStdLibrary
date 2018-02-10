//
// Created by Administrator on 2/10/2018.
//

#ifndef FIRSTLASTFLLinkedList_H
#define FIRSTLASTFLLinkedList_H
#include "util.h"
#include "boolean.h"


typedef struct _FLNode *FLNode;
struct _FLNode {
    void *value;
    FLNode next;
};

typedef struct _FLLinkedList {
    private FLNode _first;
    private FLNode _last;
    public readOnly int size;
} *FLLinkedList;

FLLinkedList new_FLLinkedList();

void FLLinkedList_add(FLLinkedList self, void *p);

void FLLinkedList_remove(FLLinkedList self, void *p);

boolean FLLinkedList_isEmpty(FLLinkedList self);

boolean FLLinkedList_contains(FLLinkedList self,void* p);

void FLLinkedList_forEach(FLLinkedList self, void(*action)(void *));

#endif //FIRSTLASTFLLinkedList_H

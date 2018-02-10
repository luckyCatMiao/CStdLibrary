//
// Created by Administrator on 2/10/2018.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "util.h"
typedef struct _Node *Node;
struct _Node {
    void *value;
    Node next;
};

typedef struct _LinkedList {
    private Node _first;
    public readOnly int size;
} *LinkedList;

LinkedList new_LinkedList();

void linkedlist_add(LinkedList self, void *p);

void linkedlist_remove(LinkedList self, void *p);

#endif //LINKEDLIST_H

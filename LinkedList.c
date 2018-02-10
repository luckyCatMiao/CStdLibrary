//
// Created by Administrator on 2/10/2018.
//

#include <stdlib.h>
#include "LinkedList.h"

Node new_Node(void *value);


Node new_Node(void *value) {
    Node node=malloc(sizeof(struct _Node));
    node->value=value;
    node->next=NULL;
    return node;
}

void linkedlist_add(LinkedList self, void *p) {
    self->size++;
    Node old=self->_first;
    Node new=new_Node(p);
    new->next=old;
    self->_first=new;
}

void linkedlist_remove(LinkedList self, void *p) {
    Node first=self->_first;
    while(first->value!=p&&firs)
}

LinkedList new_LinkedList() {
    LinkedList list = malloc(sizeof(struct _LinkedList));
    list->size=0;
    //guard node,usd for simplicity(will consume more memory when compared with a without-guard-node version)
    list->_first=new_Node(0);

    return list;
}


//
// Created by Administrator on 2/10/2018.
//

#include <stdlib.h>
#include "LinkedList.h"

Node new_Node(void *value);


Node new_Node(void *value) {
    Node node = malloc(sizeof(struct _Node));
    node->value = value;
    node->next = NULL;
    return node;
}

void linkedlist_remove(LinkedList self, void *p) {
    if(self->_first==NULL){
        return;
    }
    Node current=self->_first;
    Node last=NULL;
    while(current!=NULL){
        if(current->value==p){
            last->next=current->next;
            free(current);
            return;
        }
        last=current;
        current=current->next;
    }
}

void linkedlist_add(LinkedList self, void *p) {
    self->size++;
    Node new = new_Node(p);
    if (self->_first == NULL) {
        self->_first = new;
    } else {
        Node old = self->_first;
        new->next = old;
        self->_first = new;
    }
}



LinkedList new_LinkedList() {
    LinkedList list = malloc(sizeof(struct _LinkedList));
    list->size = 0;

    return list;
}


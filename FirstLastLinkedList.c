//
// Created by Administrator on 2/10/2018.
//

#include <stdlib.h>
#include "FirstLastLinkedList.h"

FLNode new_FLNode(void *value);


FLNode new_FLNode(void *value) {
    FLNode node = malloc(sizeof(struct _FLNode));
    node->value = value;
    node->next = NULL;
    return node;
}

void FLLinkedList_forEach(FLLinkedList self, void (*action)(void *)) {
    FLNode current=self->_first;
    while(current!=NULL){
        action(current->value);
        current=current->next;
    }
}

boolean FLLinkedList_contains(FLLinkedList self, void *p) {
    FLNode current = self->_first;
    while (current != NULL) {
        if (current->value == p) {
            return true;
        }
        current = current->next;
    }
    return false;
}

boolean FLLinkedList_isEmpty(FLLinkedList self) {
    return self->_first == NULL;
}


void FLLinkedList_remove(FLLinkedList self, void *p) {

    FLNode current = self->_first;
    FLNode last =NULL;
    while (current != NULL) {
        if (current->value == p) {
            if (last != NULL) {
                //index>=1
                last->next = current->next;
            } else {
                //without last,index is 0
                self->_first = NULL;
            }
            self->size--;
            free(current);
            return;
        }
        last = current;
        current = current->next;
    }

}



void FLLinkedList_add(FLLinkedList self, void *p) {
    self->size++;
    FLNode new = new_FLNode(p);
    //whether existed or not,this code can work correctly
    FLNode old = self->_first;
    self->_first = new;
    new->next = old;
}


FLLinkedList new_FLLinkedList() {
    FLLinkedList list = malloc(sizeof(struct _FLLinkedList));
    list->size = 0;
    list->_first = NULL;
    return list;
}


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

boolean linkedlist_contains(LinkedList self, void *p) {
    Node current = self->_first;
    while (current != NULL) {
        if (current->value == p) {
            return true;
        }
        current = current->next;
    }
    return false;
}

boolean linkedlist_isEmpty(LinkedList self) {
    return self->_first == NULL;
}


void linkedlist_remove(LinkedList self, void *p) {


    Node current = self->_first;
    Node last = self->_first;
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

void linkedlist_add(LinkedList self, void *p) {
    self->size++;
    Node new = new_Node(p);
    //whether existed or not,this code can work correctly
    Node old = self->_first;
    self->_first = new;
    new->next = old;
}


LinkedList new_LinkedList() {
    LinkedList list = malloc(sizeof(struct _LinkedList));
    list->size = 0;
    list->_first = NULL;
    return list;
}


//
// Created by Administrator on 2/6/2018.
//

#include "list.h"
#include <stdlib.h>
#define INIT_SIZE 10


void list_ensureSize(List self, int i);

void list_checkIndex(List pList, int index);

List create_List() {
    List list=malloc(sizeof(struct _List));
    void* p=malloc(INIT_SIZE*4);
    list->_arr=p;
    list->size=0;
    list->_arrSize=INIT_SIZE;

    return list;
}

void list_add(List self, void *p) {

    //ensureSize(self,++(self->size));
    self->_arr[self->size++]=p;
}



void list_checkIndex(List pList, int index) {

}

void list_ensureSize(List self, int i) {

}

void* list_get(List self, int index) {
    list_checkIndex(self,index);
    return self->_arr[index];
}

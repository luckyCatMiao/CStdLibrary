//
// Created by Administrator on 2/6/2018.
//

#include "list.h"
#include <stdlib.h>

#define INIT_SIZE 10


void list_ensureSize(List self, int size);

void list_checkIndex(List self, int index);

void list_grow(List self, int newSize);

void list_copy(List self, void **oldArr, void **newArr, int size);

List create_List() {
    List list = malloc(sizeof(struct _List));

    void *p = malloc(INIT_SIZE * 4);
    list->_arr = p;
    list->size = 0;
    list->_arrSize = INIT_SIZE;

    return list;
}

void list_add(List self, void *p) {

    list_ensureSize(self, self->size + 1);
    self->_arr[self->size++] = p;
}


void list_checkIndex(List self, int index) {
    if (!(0 <= index && index < self->size)) {

    }
}

void list_ensureSize(List self, int size) {

    int oldSize = self->_arrSize;
    while (oldSize < size) {
        oldSize = oldSize * 2 + 10;
    }
    //if need expand
    if (oldSize != self->_arrSize) {
        list_grow(self, oldSize);
    }

}

void list_grow(List self, int newSize) {
    void **oldArr = self->_arr;

    void **p = malloc((size_t) (newSize * 4));
    list_copy(self, oldArr, p, self->size);
    //release old
    free(oldArr);
    self->_arr = p;

}

void list_copy(List self, void **oldArr, void **newArr, int size) {
    for (int i = 0; i < size; i++) {
        newArr[i] = oldArr[i];
    }
}

void *list_get(List self, int index) {
    list_checkIndex(self, index);
    return self->_arr[index];
}

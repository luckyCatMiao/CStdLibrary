//
// Created by Administrator on 2/6/2018.
//

#include "list.h"
#include <stdlib.h>

#define INIT_SIZE 10


void list_ensureSize(List self, int newSize);

void list_checkIndex(List self, int index);

void list_grow(List self, int newSize);

void list_copy(List self, void **oldArr, void **newArr, int size);

List create_List() {
    List list = malloc(sizeof(struct _List));

    void **p = malloc(INIT_SIZE * 4);
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

void list_ensureSize(List self, int newSize) {

    int oldSize = self->_arrSize;
    while (oldSize < newSize) {
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

void list_forEach(List self, void (*action)(void *)) {
    for(int i=0;i<self->size;i++){
        action(list_get(self,i));
    }
}

void list_clear(List self) {
    //release old
    free(self->_arr);

}

void list_remove(List self, int index) {
    list_checkIndex(self, index);
    self->size--;
    //do not need to reallocate memory
    int moveSize = self->size - 1 - index;
    for (int i = 0; i < moveSize; i++) {
        int a = index + i;
        self->_arr[a] = self->_arr[a + 1];
    }
}

boolean list_contains(List self, void *value) {
    for (int i = 0; i < self->size; i++) {
        //just check memory address for equality instead of internal data comparision
        void **arr = self->_arr;
        if (*(arr + i) == value) {
            return true;
        }
    }
    return false;
}


boolean list_isEmpty(List self) {
    return self->size == 0;
}

void *list_get(List self, int index) {
    list_checkIndex(self, index);
    return self->_arr[index];
}







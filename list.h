//
// Created by Administrator on 2/6/2018.
//

#ifndef LIST
#define LIST

#include "boolean.h"

struct _List {
    void **_arr;
    int size;
    int _arrSize;
};

typedef struct _List *List;

List create_List();

void list_add(List self, void *p);

void *list_get(List self, int index);

boolean list_isEmpty(List self);

/**
 * this function just compare the memory address for equality,just like what java did default.
 * @param self
 * @param value
 * @return
 */
boolean list_contains(List self, void *value);

void list_remove(List self, int index);

void list_clear(List self);

void list_forEach(List self, void(*action)(void *));


#endif

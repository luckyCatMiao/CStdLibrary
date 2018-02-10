//
// Created by Administrator on 2/6/2018.
//

#ifndef LIST
#define LIST

#include "boolean.h"

/**
 * be careful,the list support the base type(such as int),and pointer(such as int*)
 * you need to remember what type you have saved in it,and cast it to correct type
 */
struct _List {
    void **_arr;
    int size;
    int _arrSize;
};

typedef struct _List *List;

List new_List();

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

/**
 * be careful! if you have saved the object type rather than base type,than the returned type was a pointer!do not compare then directly!
 * @param self
 * @param value
 * @param comparison
 * @return
 */
int list_binarySearch(List self, void *value, int (*comparison)(void *, void *));

#endif

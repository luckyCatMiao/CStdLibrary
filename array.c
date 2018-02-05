#include <stdlib.h>
#include "array.h"

void checkIndex(int index);

void *get(Array self, int index) {
    checkIndex(index);
    char *p = (void *) self->_p;

    return (p + (index * self->_elementSize));
}

Array newArray(int elementSize, int length) {
    int len = sizeof(struct _Array);
    Array arr = malloc((size_t) len);
    arr->size = length;
    arr->_elementSize = elementSize;
    arr->_self = arr;

    int memorySize = elementSize * length;;
    char *p = malloc((size_t) memorySize);
    for (int i = 0; i < memorySize; i++) {
        *(p + i) = NULL;
    }
    arr->_p = p;
    arr->get = &get;


    return arr;
}

void checkIndex(int index) {

}



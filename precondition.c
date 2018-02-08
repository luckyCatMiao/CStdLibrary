//
// Created by Administrator on 2/8/2018.
//

#include "precondition.h"
#include <stdio.h>


void __check(String msg, int lineNumber, String fileName);


void __check(String msg, int lineNumber, String fileName) {
    printf("error:%s,lineNumber:%d,fileName:%s", msg, lineNumber, fileName);
}

void __checkIndex(int index, int min, int max, int lineNumber, String fileName) {
    if (!(min<=index&&index<=max)) {
        __check("index out of range", lineNumber, fileName);
    }
}

void __checkState(boolean b, String msg, int lineNumber, String fileName) {
    if (b != true) {
        __check(msg, lineNumber, fileName);
    }
}

void __checkNotNull(void *p, String msg, int lineNumber, String fileName) {
    if (p == NULL) {
        __check(msg, lineNumber, fileName);
    }
}

void __checkArgument(boolean b, String msg, int lineNumber, String fileName) {
    if (b != true) {
        __check(msg, lineNumber, fileName);
    }
}





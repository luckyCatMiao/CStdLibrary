#include "util.h"
#include <stdio.h>
#include "boolean.h"

void println_d(int i) {
    printf("%d\n", i);
}

void println_s(String str) {
    printf("%s\n", str);
}



void printlnBool(boolean i) {
    if (i == 1) {
        println_s("true");
    }
    else if (i == 0) {
        println_s("false");
    }
    else {
        //error
    }
}



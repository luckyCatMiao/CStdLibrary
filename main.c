#include <stdio.h>
#include "mstring.h"
#include "util.h"



int main() {
    String str=newString("12345");
//    println_s(str);
//    println_d(length(str));
//    println_d(isEmpty(str));
//    println_s(charAt(str,1));
//    printlnBool(equal(str,newString("123")));
//    printlnBool(startWith(str,newString("2")));
//    println_d(indexOf(str,'3'));
    println_s(subString(str,1,3));
    println_s(concat(str,newString("678")));

    return 0;
}



#include <stdio.h>
#include "mstring.h"
#include <stdlib.h>
#include "util.h"
#include "array.h"

struct _Student {
    String name;
    int age;
    void (*toString)(struct _Student* s);
};

typedef struct _Student *Student;

void toString(Student self) {
    println_s(self->name);
}

Student newStudent(String name, int age) {

    int len = sizeof(Student);
    Student s = malloc((size_t) len);
    s->name = newString(name);
    s->age = age;
    s->toString=toString;

    return s;

}

int add(int a, int b) {
    return a + b;
}





int main() {
    String str = newString("12345abc");
//    println_s(str);
//    println_d(length(str));
//    println_d(isEmpty(str));
//    println_s(charAt(str,1));
//    printlnBool(equal(str,newString("123")));
//    printlnBool(startWith(str,newString("2")));
//    println_d(indexOf(str,'3'));
//    println_s(subString(str,1,3));
//    println_s(concat(str,newString("678")));
//    println_s(toUpperCase(str));
//    println_s(toDownCase(str));
//
//    Student student={newString("ancsds")};
//    println_s(student.name);
//    println_d(sizeof(student));

   // Student s = newStudent("mike", 18);
   // println_s(s->name);
   // s->toString(s);
    //println_d(sizeof(struct _Student));

//    void (*f)(Student s);
//    f = toString; /* 将func函数的首地址赋给指针f */
//    f(s);


    Array array=newArray(4,10);
    println_d(array->size);
    println_d(*((int*)array->get(array, 1)));

    //println_d((int) calloc(10, 10));

    return 0;
}



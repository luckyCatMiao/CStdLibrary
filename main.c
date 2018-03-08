#include <stdio.h>
#include "mstring.h"
#include <stdlib.h>
#include "util.h"
#include "list.h"
#include "LinkedList.h"
#include "math.h"

struct _Student {
    String name;
    int age;

};


void baseTest();

void binarySearchTest();

void linkedlistTest();

typedef struct _Student *Student;


Student newStudent(String name, int age) {

    int len = sizeof(Student);
    Student s = malloc((size_t) len);
    s->name = newString(name);
    s->age = age;


    return s;

}


void printStu(void *p) {
    Student s = p;
    println_d(s->age);
}
struct qq{
    int b;
    int a[];
};

int main() {


    //baseTest();
    //binarySearchTest();
    //linkedlistTest();

    //printlnBool(isPrime(289));
//    int a[100];
//    int result;
//    primesBelow(100,a,&result);
//    for(int i=0;i<result;i++){
//        println_d(a[i]);
//    }

    return 0;
}

void f2(void *value) {
    println_d((int) value);
}

void linkedlistTest() {
    LinkedList list = new_LinkedList();
    for (int i = 0; i < 5; i++) {
        linkedlist_add(list, (void *) i);
    }

    linkedlist_forEach(list, f2);
    println_d(list->size);
    for (int i = 0; i < 5; i++) {
        linkedlist_remove(list, (void *) i);
    }
    println_d(list->size);

}

int com(void *a, void *b) {
    int v1 = (int) a;
    int v2 = (int) b;
    return v1 - v2;
}

void binarySearchTest() {

    List list = new_List();
    for (int i = 0; i < 50; i++) {
        list_add(list, (void *) i);
    }

    int index = list_binarySearch(list, (void *) 16, com);
    println_d(index);

}


void baseTest() {
    //String str = newString("12345abc");
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


//    Array array = newArray(4, 10);
//    println_d(array->size);
//    println_d(*((int *) array->get(array, 1)));


    //println_d((int) calloc(10, 10));



    //void(*fun)(Student)=&toString;

//    List l = new_List();
//    for (int i = 0; i < 100; i++) {
//        list_add(l, newStudent("mike", i));
//    }
//    Student s = list_get(l, 0);
//    println_s(s->name);
//
//
//    Student s2 = newStudent("lg", 20);
//    list_add(l, s2);
//    list_clear(l);
//    //bao cuo
//    println_d(s2->age);
//
//    printlnBool(list_contains(l, s2));
//
//    Student s3 = list_get(l, 100);
//    println_d(s3->age);
//
//    list_remove(l,0);
//    Student s4 = list_get(l, 0);
//    println_d(s4->age);
//
//    list_forEach(l,printStu);



    //checkArgument(2 == 3, "error msg");

}




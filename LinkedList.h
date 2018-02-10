//
// Created by Administrator on 2/10/2018.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
typedef struct _Node *Node;
struct _Node{
    void* value;
    Node next;
};

typedef struct _LinkedList{
    Node _first;
    int size;
}*LinkedList;

LinkedList new_LinkedList();
void linkedlist_add(LinkedList self, void *p);
#endif //LINKEDLIST_H

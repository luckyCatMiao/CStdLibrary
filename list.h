//
// Created by Administrator on 2/6/2018.
//

#ifndef LIST
#define LIST

struct _List{
    void** _arr;
    int size;
    int _arrSize;
};

typedef struct _List* List;
List create_List();
void list_add(List self, void* p);
void* list_get(List self,int index);
#endif

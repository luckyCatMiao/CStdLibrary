//
// Created by Administrator on 2/8/2018.
//

#ifndef PRECONDITION_H
#define PRECONDITION_H


#include "boolean.h"
#include "mstring.h"

void __checkArgument(boolean b, String msg, int lineNumber, String fileName);

void __checkState(boolean b, String msg, int lineNumber, String fileName);

void __checkNotNull(void *p, String msg, int lineNumber, String fileName);

void __checkIndex(int index, int min, int max, int lineNumber, String fileName);

#ifdef NDEBUG
#define  checkArgument(a, b)
#define  checkNotNull(a, b)
#define  checkState(a, b)
#define  checkIndex(a, b, c)
#else
#define  checkArgument(a, b) (__checkArgument(a,b,__LINE__, __FILE__))
#define  checkNotNull(a, b) (__checkNotNull(a,b,__LINE__, __FILE__))
#define  checkState(a, b) (__checkState(a,b,__LINE__, __FILE__))
#define  checkIndex(a, b, c) (__checkIndex(a,b,c,__LINE__, __FILE__))
#endif


#endif //PRECONDITION_H

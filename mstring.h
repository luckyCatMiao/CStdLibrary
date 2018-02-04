#include "boolean.h"


typedef char* String;

int length(String str);
char *newString(char *str);
boolean isEmpty(String str);
String charAt(String str, int index);
boolean equal(String s1, String s2);
boolean startWith(String s1, String s2);
int indexOf( String src,  char ch);
String subString(String src,int start,int end);
String concat(String s1,String s2);
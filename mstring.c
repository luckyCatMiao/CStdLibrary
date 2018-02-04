#include "mstring.h"
#include <stdlib.h>
#include "boolean.h"


/**
 * create new String
 * @param str
 * @return
 */
String newString(char *str) {
    int len= length(str);
    char* p=(char*)malloc((size_t)len+1);
    for(int i=0;i<len;i++){
        p[i]=str[i];
    }
    p[len]='\0';
    return p;
}
/**
 *
 * @param str
 * @return
 */
int length(String str) {
    char* s2= (char *) str;
    while(*s2++!='\0');
    return (int) (s2 - str - 1);
}

/**
 *
 * @param str
 * @return
 */
boolean isEmpty(String str) {
    return length(str)==0;
}



String charAt(const String str, int index) {
    char* p=(char*)malloc(2);
    p[0]=str[index];
    p[1]='\0';
    return p;
}


boolean equal(const String s1, const String s2) {
    int l1=length(s1);
    int l2=length(s2);
    if(l1!=l2){
        return false;
    }

    for(int i=0;i<l1;i++){
        if(s1[i]!=s2[i]){
            return false;
        }
    }

    return true;

}



boolean startWith(const String s1, const String s2) {
    int len=length(s2);
    for(int i=0;i<len;i++){
        if(s1[i]!=s2[i]){
            return false;
        }
    }
    return true;
}



int indexOf(const String src, const char ch) {
    for(int i=0;i<length(src);i++){
        if(ch==src[i]){
            return i;
        }
    }
    return -1;
}



String subString(String src, int start, int end) {
    int len=end-start;
    char* p=(char*)malloc((size_t) (len + 1));
    for(int i=0;i<len;i++){
        p[i]=src[start+i];
    }
    p[len]='\0';
    return p;
}



String concat(String s1, String s2) {
    int len1=length(s1);
    int len2=length(s2);
    char* p=(char*)malloc((size_t) (len1 + len2 + 1));
    for(int i=0;i<len1;i++){
        p[i]=s1[i];
    }
    for(int i=0;i<len2;i++){
        p[len1+i]=s2[i];
    }

    p[len1+len2]='\0';
    return p;
}

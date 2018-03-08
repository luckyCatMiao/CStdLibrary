//
// Created by Administrator on 2018/3/8.
//

#include <math.h>
#include "math.h"




/**
 * 判断一个数是不是素数
 * @param num
 * @return
 */
boolean isPrime(int num) {

    int s=(int)sqrt(num);
    for(int i=2;i<=s;i++){
        if(num%i==0){
            return false;
        }
    }

    return true;
}

/**
 * 返回小于等于一个数的所有素数(需要传进大小为num的数组的指针)
 * @return
 */
void primesBelow(int num, int *resultArr, int *resultSize) {
    //算法:埃拉托斯特尼筛法
    //初始化数组
    int arr[100]={};

    for(int i=1;i<=100;i++){
        arr[i-1]=i;
    }

    int s=(int)sqrt(num);
    for(int i=2;i<=s;i++){
        int a=i;
        while(a<num){
            arr[i-1]=0;
            a*=i;
        }
    }

    int index=0;
    for(int i=1;i<=100;i++){
        if(arr[i-1]!=0){
            resultArr[index++]=arr[i-1];
        }
    }

    *resultSize=index;
}

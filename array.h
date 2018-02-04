struct _Array{
    int size;
    void* _p;
    int _elementSize;
    void* (*get)(struct _Array*, int);
    struct _Array* _self;
};
typedef struct _Array *Array;
/**
 * createa new Array
 * @param elementSize
 * @param length
 * @return
 */
Array newArray(int elementSize,int length);

struct _Array {
    //todo refine array
    int size;
    void *_p;
    int _elementSize;

    void *(*get)(struct _Array *, int);

    struct _Array *_self;
};

typedef struct _Array *Array;

/**
 * create a new Array
 * @param elementSize
 * @param length
 * @return
 */
Array newArray(int elementSize, int length);

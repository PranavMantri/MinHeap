#ifndef _data_structures_h
#define _data_structures_h
#include <vector>

typedef struct TAG_ELEMENT {
    double key;
    int position; 
}Element;

typedef struct TAG_HEAP {
    int capacity; /* capacity of the heap -- this is usually used for heaps managed on arrays*/
    int size; /* current size of the heap */
    std:: vector<Element *> A; /* array of pointers to ELEMENT */
    int hcount; /*count variable to keep track of heapify calls*/ 
}Heap;
#endif

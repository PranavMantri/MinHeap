#ifndef _data_structures_h
#define _data_structures_h
#include <vector>

typedef struct TAG_ELEMENT {
    double key;
    int position; 
    // other fields as you see fit
}Element;

typedef struct TAG_HEAP {
    int capacity; /* capacity of the heap */
    int size; /* current size of the heap */
    std:: vector<Element *> A; /* array of pointers to ELEMENT */
    int hcount; 
    // other fields as you see fit
}Heap;
#endif

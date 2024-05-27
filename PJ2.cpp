#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>
#include <cstring>
#include "data_structures.h"
#include "heap.h"


using namespace std;



int main(int argc, char** argv)
{
    if(argc!= 4)
    {
        fprintf(stderr, "./%s <ifile> <ofile> flag\n", argv[0]);
        exit(1);
    }

    Heap *heap_ = NULL;
    int count_heapify = atoi(argv[3]); 
    char buf[20] = {0};
    while(fgets(buf, sizeof(buf), stdin))
    {

        int len = strlen(buf);
        int tempLen = 0; 
        char inst[10] = {0}; 
        char num1[5] = {0}; 
        char num2[5] = {0};
        strcpy(inst, strtok(buf, " \n"));
        
        if(strcmp(inst, "Stop") == 0)
        {
            stop(heap_);
            return 0; 
        }
        if(strcmp(inst, "Init") == 0)
        {
            strcpy(num1, strtok(NULL, " "));
            if(num1 == NULL)
                cerr << "invalid init call: provide a quantity" << endl; 
            else
                heap_ = new Heap;
                init(heap_, atoi(num1)); 
        }
        else if(strcmp(inst, "Print") == 0)
        {
            print(heap_, count_heapify); 
        }
        else if(strcmp(inst, "Write") == 0)
        {
            write(heap_, argv[2]); 
        }
        else if(strcmp(inst, "Read") == 0)
        {
            read(heap_, argv[1]);
        }
        else if(strcmp(inst, "Insert") == 0)
        {
            strcpy(num1, strtok(NULL, " "));
            if(num1 == NULL)
                cerr << "invalid insert call: provide a key" << endl; 
            else
                insert(heap_, atoi(num1)); 
        }
        else if(strcmp(inst, "ExtractMin") == 0)
        {
            extractMin(heap_); 
        }
        else if(strcmp(inst, "DecreaseKey") == 0)
        {
            strcpy(num1, strtok(NULL, " "));
            strcpy(num2, strtok(NULL, " "));
            if(num1==NULL || num2==NULL)
                cerr << "invalid DK call: provide position and newKey" << endl; 
            else 
                decreaseKey(heap_, atoi(num1), atoi(num2)); 
        }
        else
            cerr<< "Warning: Invalid Instruction"<< endl;
    }
    exit(1); 
}

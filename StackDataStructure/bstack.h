//
// Created by Ben on 2023-03-05.
//

#ifndef STACKDATASTRUCTURE_BSTACK_H
#define STACKDATASTRUCTURE_BSTACK_H

#include <iostream>

using namespace std;

class BStack {
    int capacity = 10;
    int size = 0;
    int *stack;

    bool isEmpty(){return 0 == size;};
    bool isFull(){return capacity == size;};

public:
    BStack();
    BStack(int capacity);
    ~BStack();

    int getCapacity() {return capacity;};
    int getSize() {return size;};

    void push(int value);
    int pop();
    int peek();
    void printout();
};


#endif //STACKDATASTRUCTURE_BSTACK_H

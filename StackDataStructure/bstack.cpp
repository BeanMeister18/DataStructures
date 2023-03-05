//
// Created by Ben on 2023-03-05.
//

#include "bstack.h"

BStack::BStack() {
    stack = new int[capacity];
}

BStack::BStack(int capacity) {
    stack = new int[capacity];
    this->capacity = capacity;
}

BStack::~BStack() {
    cout << "Destructing Stack" << endl;
    delete stack;
    stack = nullptr;
}

void BStack::push(int value) {
    if(isFull()){
        cerr << "Stack Overflow" << endl;
        return;
    }

    stack[size] = value;
    size++;
}

int BStack::pop() {
    if(isEmpty()){
        cerr << "Empty" << endl;
        return 0;
    }

    return stack[--size];
}

int BStack::peek() {
    if(isEmpty()){
        cerr << "Empty" << endl;
        return 0;
    }

    return stack[size - 1];
}

void BStack::printout() {
    if(isEmpty()){
        cout << "[]\n";
    }
    else{
        cout << "[ ";
        for(int i = 0; i < size; i++){
            cout << stack[i] << " ";
        }
        cout << "]";
    }
}
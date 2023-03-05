#include <iostream>
#include "bstack.h"

using namespace std;

int main() {
    BStack stackDefault;

    stackDefault.printout();
    stackDefault.pop();
    stackDefault.peek();
    stackDefault.push(1);
    stackDefault.push(2);
    stackDefault.push(3);
    cout << "Peek = " << stackDefault.peek() << endl;
    cout << "Pop = " << stackDefault.pop() << endl;
    for(int i = stackDefault.getSize(); i < stackDefault.getCapacity() + 1; i++){
        stackDefault.push(i * 10);
    }
    stackDefault.printout();
    stackDefault.push(15);
}

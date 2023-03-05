#include "LinkedList.h"

int main()
{
	LinkedList list;
	
	list.print(cout);
	
	cout << list.size() << endl;
	cout << list.get(8) << endl << endl;
	
	list.removeLast();
	list.print(cout);
	cout << endl << endl;
	
	list.add(3);
	list.add(5);
	list.add(1);
	
	list.print(cout);
	
	cout << endl;
	
	cout << list.size() << endl;
	cout << list.get(1) << endl;
	list.get(1)->output(cout);
	
	cout << endl << endl;
	
	list.removeLast();
	list.print(cout);
	
	
}
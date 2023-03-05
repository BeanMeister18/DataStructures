#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node
{
	private:
		int data;
		Node* pNext;
	
	public:
		Node(int value);
		
		int get_data();
		Node* next();
		
		void set_data(int value);
		void set_next(Node *pNext);
		
		void output(ostream &out);
};

#endif
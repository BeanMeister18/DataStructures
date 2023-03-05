#include "Node.h"
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList
{
	private:
		Node *head = NULL;
		
		Node* getLastNode();
	
	public:
		LinkedList();
		
		Node *add(int data);
		
		void print(ostream &out);
		
		int size();
		
		Node* get(int index);
		
		void removeLast();
};


#endif
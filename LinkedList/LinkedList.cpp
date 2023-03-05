#include "LinkedList.h"

LinkedList::LinkedList()
{
}

Node* LinkedList::getLastNode()
{
	if(NULL == head) //if linked list is empty
	{
		return NULL; 
	}
	
	Node* current = head;
	
	while(NULL != current->next()) 
	{
		current = current->next();
	}
	
	return current;
}


Node *LinkedList::add(int data)
{
	Node* newNode = new Node(data);
	Node* last = getLastNode();
	if (NULL == last) //if linked list is empty
	{
		head = newNode;
		return head;
	}
	last->set_next(newNode);
	return newNode;
}

void LinkedList::print(ostream &out)
{
	if(NULL == head)
	{
		out << "Empty" << endl;
		return;
	}
	
	Node* current = head;
	
	do
	{
		current->output(cout);
		cout << " ";
	}
	while(current = current->next());
	cout << endl;
}
	
	
int LinkedList::size()
{
	if(NULL == head)
	{
		return 0;
	}
	
	Node* current = head;
	int count = 1;
	
	while(NULL != current->next()) 
	{
		current = current->next();
		count++;
	}
	
	return count;
}

Node* LinkedList::get(int index)
{
	if(index < 0 || index > (size() - 1))
	{
		return NULL;
	}
	
	Node* current = head;
	
	for(int i = 0; i < index; i++)
	{
		current = current->next();
	}
	
	return current;
}

void LinkedList::removeLast()
{
	if(NULL == head)
	{
		return;
	}
	
	Node* last = get(size() - 2);
	
	delete last->next();
	
	last->set_next(NULL);
}

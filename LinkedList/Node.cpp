#include "Node.h"

Node::Node(int value)
{
	data = value;
	pNext = NULL;
}


int Node::get_data()
{
	return data;
}

Node* Node::next()
{
	return pNext;
}


void Node::set_data(int value)
{
	data = value;
}

void Node::set_next(Node *pNext)
{
	this->pNext = pNext;
}


void Node::output(ostream &out)
{
	out << data;
}
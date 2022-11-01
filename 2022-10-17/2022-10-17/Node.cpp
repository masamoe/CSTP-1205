#include "Node.h"

Node::Node(int data)
{
	data = data;
	next = nullptr;
}

Node::Node(int data, Node *next)
{
	data = data;
	next = next;
}

void Node::SetNext(Node *next)
{
	next = next;
}
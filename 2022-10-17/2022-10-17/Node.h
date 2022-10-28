#pragma once
#include <stdlib.h>
#include <iostream>

class Node
{
public:
	int Data;
	Node* Next;

public:
	Node(int data);
	Node(int data, Node* next);
	void SetNext(Node* next);
};
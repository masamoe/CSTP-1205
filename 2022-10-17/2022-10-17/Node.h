#pragma once
#include <stdlib.h>
#include <iostream>

class Node
{
public:
	int data;
	Node *next;

public:
	Node(int data);
	Node(int data, Node *next);
	void SetNext(Node *next);
};
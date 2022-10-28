#include <stdlib.h>
#include <iostream>
#include <list>
#include "Node.h"


using namespace std;

void PrintList(list<int> myList)
{
	
	for (auto n : myList)
	{
		cout << "n: " << n << endl;
	}

}

void PrintNodeList(Node* node)
{
    if (node == NULL)
    {
        cout << "NULL" << endl;
    }
    else
    {
        cout << node << endl;
        node->Next;
    }
}

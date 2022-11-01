#include <stdlib.h>
#include <iostream>
#include <list>
#include "Node.h"

using namespace std;

void PrintList(list<int> myList)
{
    list<int>::iterator it;
    for (it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void PrintNodeList(Node *node)
{
    Node *temp = node;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

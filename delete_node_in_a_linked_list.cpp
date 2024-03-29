#include <iostream>
using namespace std;

// codestudio code
#include <bits/stdc++.h>
// /****************************************************************

// Following is the class structure of the LinkedListNode class:

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// *****************************************************************/

void deleteNode(LinkedListNode<int> *node)
{
    if (node->next != NULL)
    {
        node->data = node->next->data;
        node->next = node->next->next;
    }
    else if (node->next == NULL)
    {
        node = NULL;
    }
} // codestudio code

int main()
{

    return 0;
}
#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        node *next;

        Node()
        {
            next = NULL;
        }
};
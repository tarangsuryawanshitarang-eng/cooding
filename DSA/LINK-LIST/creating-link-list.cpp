#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};  
class linkedlist
{
    node *head;
    node *tail;
    public:
    linkedlist()
    {
        head = NULL;
        tail = NULL;
    }
};  
int main()
{
    // creating a linked list
    linkedlist l1;
}
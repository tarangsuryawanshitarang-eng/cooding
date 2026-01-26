#include <iostream>
using namespace std;
class node {
    public:
        int data;
        node *nxt;
        // constructor
        node(int val) {data = val; nxt = NULL; }
    };
class list{
        node *head;
        node *tail;
    public:
        list(){ head = tail = NULL; }
        void push_front(int val){
            node* new_node = new node(val); // dynaic allocation;
            if (head == NULL)  head = tail = new_node;
            else {new_node->nxt = head ; head = new_node;}

        }
        void push_back(int val){
            node* new_node = new node(val); // dynaic allocation;
            if(head == NULL) head = tail = new_node;
            else {tail-> nxt = new_node; tail =new_node;}
        }
            void print() {
                node* temp = head ;
                while(temp != NULL){
                    cout << temp->data <<" ";
                    temp = temp->nxt;
            }
        }
    };
int main()
{
    // creating a linked list
    list l1;
    l1.push_front(10);
    l1.push_front(20);  
    l1.push_front(30);
    l1.push_back(9);

    l1.print();
}
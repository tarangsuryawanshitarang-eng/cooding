#include <iostream>
using namespace std;

class node {
public :
int data;
node *next , *prev;
node(int val) { data = val; next = NULL; prev = NULL; }
};


class doubly_linklist {
    node* head;

public:
    doubly_linklist(){ head = NULL; }

    void push_back(int val){
        node* new_node = new node(val);

        // empty list
        if(head == NULL){
            head = new_node;
            return;
        }

        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        // attach at end
        temp->next = new_node;
        new_node->prev = temp;
    }

    void Display(){
        node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
};

int main() {
    doubly_linklist l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    l1.Display();

}
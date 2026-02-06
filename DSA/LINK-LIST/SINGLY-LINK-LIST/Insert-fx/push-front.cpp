#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* nxt;

    node(int val){ data = val; nxt = NULL; }
};

void push_front(node*& head, int val){
    node* new_node = new node(val);
    new_node->nxt = head;
    head = new_node;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->nxt;
    }
    cout << "NULL\n";
}

int main() {
    node* head = NULL;
    push_front(head,50);
    display(head);
    push_front(head,40);
    display(head);
    push_front(head,30);
    display(head);
    push_front(head,20);
    display(head);
    push_front(head,10);
    display(head);
    
}

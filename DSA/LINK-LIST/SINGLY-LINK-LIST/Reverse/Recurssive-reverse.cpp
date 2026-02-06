#include <iostream>
using namespace std;
class node{
    public: 
    int data ;
    node* nxt;
    node(int val){data = val ; nxt = NULL; }
};  
void reverse_ll(node*& head) {
    if (head == NULL || head->nxt == NULL)
        return;

    node* temp = head->nxt;
    reverse_ll(temp);

    head->nxt->nxt = head;
    head->nxt = NULL;

    head = temp;
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
    node* head = new node(10) ;
    node* a = new node(20) ;
    node* b = new node(30) ;
    node* c = new node(40) ;

    head -> nxt = a;
    a->nxt = b;
    b ->nxt = c;

    display(head);
    reverse_ll(head);  
    display(head);
}
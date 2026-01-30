#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* nxt;
    node(int val ){data = val ; nxt = NULL;}
};
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp= temp->nxt;
    } cout<<"NULL";
}
void pop_back(node* & head ){
    node* temp = head;
    while(temp->nxt->nxt != NULL){
        temp = temp -> nxt;
    } temp->nxt = NULL;
}


int main() {
     node* head = new node(10) ;
    node* a = new node(20) ;
    node* b = new node(30) ;
    node* c = new node(40) ;

    head -> nxt = a;
    a->nxt = b;
    b ->nxt = c;

    display(head); cout<<endl;
    pop_back(head);
    display(head);
}
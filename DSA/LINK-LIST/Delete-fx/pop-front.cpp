#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* nxt;
    node(int val){ data = val; nxt = NULL; }
};
void pop_front(node* &head){
    head = head -> nxt;

}
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp= temp->nxt;
    } cout<<"NULL";
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
    pop_front(head);
    display(head);

}
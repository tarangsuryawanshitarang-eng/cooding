#include <iostream>
using namespace std;

class node{
    public:
    int data ;
    node* nxt;

    node(int val){data = val ; nxt = NULL;}

};

void pop_front(node* &head){
    if(head == NULL) return;
    head = head -> nxt;

}
void del(node* &head , int pos){
    if(head == NULL) return;
    if(pos == 0){
        pop_front(head);
        return;
    }

 node* temp=head;
 for(int i = 0  ; i < pos-1 ; i++){
    temp = temp->nxt;
    } node* toDelete = temp->nxt;   // 30
    temp->nxt = temp->nxt->nxt;  // 20 -> 40
    delete toDelete;             // delete 30
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp= temp->nxt;
    } cout<<"NULL";
}


int main(){
     node* head = new node(10) ;
    node* a = new node(20) ;
    node* b = new node(30) ;
    node* c = new node(40) ;

    head -> nxt = a;
    a->nxt = b;
    b ->nxt = c;

    display(head); cout<<endl;
    del(head,2);
    display(head);
}
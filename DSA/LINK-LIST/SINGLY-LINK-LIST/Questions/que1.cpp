// given a link list delete alternate ele starting from second ele.
#include <iostream>
using namespace std;
class node{

public:
    int data;
    node *nxt;

    node(int val) { data = val; nxt = NULL;}

};    

void alt_del(node*& head) {
    if (head == NULL) return;

    node* current = head;

    while (current != NULL && current->nxt != NULL) {
        node* temp = current->nxt;      // second node
        current->nxt = temp->nxt;       // skip it
        delete temp;                    // delete it
        current = current->nxt;             // move ahead
    }
}

void display(node* head ){
    node* temp  = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->nxt;
    } cout<<"NULL";
    cout<<endl;
}
int main(){

//<! creating the nodes-->

  node* node1 = new node(10);
  node* node2 = new node(20);
  node* node3 = new node(30);
  node* node4 = new node(40);
  node* node5 = new node(50);


 //<!--linking the nodes created -->
  node1 -> nxt = node2; 
  node2 -> nxt = node3;
  node3 -> nxt = node4;
  node4 -> nxt = node5;
  
  
  node* head = node1;
  display(head);
  alt_del(head);
  
  display(head);
}
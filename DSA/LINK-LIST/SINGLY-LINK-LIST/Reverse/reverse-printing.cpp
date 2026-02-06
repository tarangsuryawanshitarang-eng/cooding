#include <iostream>
using namespace std;
class node {
    public : 
    int data ;
    node* nxt;

    node(int val){  data = val ; nxt = NULL;  }
};

void reverse_printing(node* head) {
    if (head == NULL) {cout<<"NULL->"; return;}
    
    reverse_printing(head->nxt);
    
    if(head->nxt == NULL) cout<<head->data;
    else cout<<"->"<<head->data;
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
    node * a = new node(10);
    node * b = new node(20);
   node * c = new node(30);


   a ->nxt = b;
   b->nxt = c;

   node* head = a;
    display(head);
   reverse_printing(head);
   

}
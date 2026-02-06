#include <iostream>
using namespace std;
class node{
    public:
    int data ;
    node* nxt;
    node(int val){data = val ; nxt=NULL; }

};


void update(node* head, int pos, int update_val) {
    node* temp = head;
    int count = 0;

    while (temp != NULL && count < pos) {
        temp = temp->nxt;
        count++;
    }

    if (temp == NULL) {
        cout << "Invalid position\n";
        return;
    }

    temp->data = update_val;
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
    
  node* node1 = new node(10);
  node* node2 = new node(20);
  node* node3 = new node(30);


 //<!--linking the nodes created -->
  node1 -> nxt = node2; 
  node2 -> nxt = node3;

  node* head = node1;
   
  display(head);

  update(head, 1 ,70 );

  display(head);

}
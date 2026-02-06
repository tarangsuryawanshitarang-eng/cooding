// given a sorted non unique link list , delete all same accuring element,
#include <iostream>
using namespace std;
class node{
    public:
    int data ;
    node* nxt;
    node(int val ){data = val ; nxt = NULL;}
};

void push_back(node*& head, int val) {
     node* new_node = new node(val);

        // case 1: empty list
        if (head == NULL) {
            head = new_node;
            return;
        }

        // case 2: non-empty list
        node* temp = head;
        while (temp->nxt != NULL) {
            temp = temp->nxt;
        }
        temp->nxt = new_node;
        new_node->nxt = NULL;  //<!--not neede here as it is already null-->
    }

void display(node*head){
    if (head == NULL) return;
    node* temp = head ;
    while(temp != NULL){
        cout << temp -> data << " --> ";
        temp = temp -> nxt;
    }cout << "NULL" ;
    cout << endl;

}

void del_same_ele(node*& head) {
    if (head == NULL) return;

    node* curr = head;

    while (curr != NULL && curr->nxt != NULL) {
        if (curr->data == curr->nxt->data) {
            node* temp = curr->nxt;          // duplicate node
            curr->nxt = curr->nxt->nxt;      // skip duplicate
            delete temp;                     // free memory
        } else {
            curr = curr->nxt;                // move forward
        }
    }
}

//<!-- linklist :  1 --> 2 --> 2 --> 3 --> 3 --> 3 --> NULL  -->
int main() {
    node * head = NULL;
    push_back(head,1);
    push_back(head,2);
    push_back(head,2);
    push_back(head,3);
    push_back(head,3);
    push_back(head,3);

    display(head);
    del_same_ele(head);
    display(head);
}
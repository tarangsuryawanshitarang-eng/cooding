#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* nxt;

    node(int val) {
        data = val;
        nxt = NULL;
    }
};

//  insert function 
void insert(node*& head, int pos, int val) {
    node* new_node = new node(val);

    // insert at beginning
    if (pos == 0) {
        new_node->nxt = head;
        head = new_node;
        return;
    }

    node* temp = head;
    for (int i = 0; i < pos - 1; i++) {
        temp = temp->nxt;
    }

    new_node->nxt = temp->nxt;
    temp->nxt = new_node;
}

//  display function
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

    insert(head, 0, 50);
    display(head);

    insert(head, 1, 40);
    display(head);

    insert(head, 2, 30);
    display(head);

    insert(head, 3, 20);
    display(head);

    insert(head, 4, 10);
    display(head);
}

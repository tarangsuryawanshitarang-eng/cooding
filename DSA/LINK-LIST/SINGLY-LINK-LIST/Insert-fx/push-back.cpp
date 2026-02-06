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

    push_back(head, 40);
    display(head);
    push_back(head, 30);
    display(head);
    push_back(head, 20);
    display(head);
    push_back(head, 50);
    display(head);
    push_back(head, 10);
    display(head);
}

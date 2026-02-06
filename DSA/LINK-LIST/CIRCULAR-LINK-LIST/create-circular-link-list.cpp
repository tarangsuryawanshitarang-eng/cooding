#include <iostream>
using namespace std;
class node {
    public :
    int data ;
    node* nxt ;

    node(int val) { data = val; nxt = NULL; }
};

class circular_linklist{
    node* head;
    public :
    circular_linklist(){ head = NULL; }

    void push_back(int val){
        node* new_node = new node(val);
        if(head == NULL){
            head = new_node;
            head->nxt = head;
            return;
        }
        node* temp = head;
        while(temp->nxt != head){
            temp = temp->nxt;
        }
        temp->nxt = new_node;
        new_node->nxt = head;
    }
    void display(){
        node* temp = head;
        do{
            cout<<temp->data<<"->";
            temp = temp->nxt;
        }while(temp != head);
        cout<<"NULL\n";
    }
};
int main() {
    circular_linklist l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.display();
    return 0;
}
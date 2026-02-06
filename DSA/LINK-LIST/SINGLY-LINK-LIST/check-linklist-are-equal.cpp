#include <iostream>
using namespace std;
class node {
public :
int data ;
node* nxt;
node(int val){data = val; nxt = NULL;}
};

class linklist{
node* head;
public:
linklist(){head = NULL;}

void push_back(int val){
    node* new_node = new node(val);

    if(head == NULL){          // empty list
        head = new_node;
        return;
    }

    node* temp = head;
    while(temp->nxt != NULL){ // stop at last node
        temp = temp->nxt;
    }
    temp->nxt = new_node;
}


void display(){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp= temp->nxt;
    } cout<<"NULL\n";
}
bool check_equal(linklist& other){
    node* p1 = head;
    node* p2 = other.head;

    while(p1 && p2){
        if(p1->data != p2->data) return false;
        p1 = p1->nxt;
        p2 = p2->nxt;
    }
    return p1 == NULL && p2 == NULL;
}

};



int main() {
    linklist l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    
    linklist l2;
    l2.push_back(10);
    l2.push_back(20);
    l2.push_back(30);
    l2.push_back(40);
    l2.push_back(50);

    cout<<"l1 : "; l1.display();
    cout<<"l2 : ";l2.display();


    if(l1.check_equal(l2)) cout<<"l1 and l2 :  equal\n";
    else cout<<"l1 and l2 : not equal\n";
    


    
}
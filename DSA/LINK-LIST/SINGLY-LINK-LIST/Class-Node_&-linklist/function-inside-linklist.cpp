#include <iostream>
using namespace std;
class node {
    public:
        int data;
        node *nxt;
        // constructor
        node(int val) {data = val; nxt = NULL; }
    };
class list{
        node *head;
        node *tail;
    public:
        list(){ head = tail = NULL; }
        void push_front(int val){
            node* new_node = new node(val); // dynaic allocation;
            if (head == NULL)  head = tail = new_node;
            else {new_node->nxt = head ; head = new_node;}

        }
        void push_back(int val){
            node* new_node = new node(val); // dynaic allocation;
            if(head == NULL) head = tail = new_node;
            else {tail-> nxt = new_node; tail =new_node;}
        }


        void pop_front(){
            if(head == NULL) return;
            node* temp = head ;
            head = head -> nxt;
            temp -> nxt = NULL;
            delete temp;
        }

        void pop_back(){
            if(head == NULL) return;
            node* temp =head;
            while(temp->nxt != tail){
                temp = temp -> nxt;
            }
            temp -> nxt = NULL;
            delete tail;
            tail = temp;
        }
        void insert(int pos , int val){
            node* new_node = new node(val);
            if(pos == 0){
                push_front(val);
                return;
            }
            node* temp = head ;
            for(int i=0; i<pos-1; i++){
                if(temp == NULL) return; // position is out of bound
                temp = temp -> nxt;
            }
            if(temp -> nxt == NULL){
                push_back(val);
                return;
            }
            new_node -> nxt = temp -> nxt;
            temp -> nxt = new_node;
           
        }
            void print() {
                node* temp = head ;
                while(temp != NULL){
                    cout << temp->data <<" ";
                    temp = temp->nxt;
            }
            
        }
    };
int main()
{
    // creating a linked list
    list l1;
    l1.push_front(80);
    l1.push_front(90);  
    l1.push_front(100);
    l1.push_front(110);
    l1.pop_front();

    l1.push_back(70);
    l1.push_back(60);
    l1.push_back(50);
    l1.pop_back();

    l1.insert(5,50);

    l1.print();
}
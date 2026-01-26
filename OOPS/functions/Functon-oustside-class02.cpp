#include <iostream>
using namespace std;

class student {
    int rollno;
    string name;
    public:
    void setter(string  , int );  //<!-- prototype function declaration -->
    void display(); //<!-- prototype function declaration -->
};

void student :: setter(string name , int rollno){
    this -> name = name ;
    this -> rollno = rollno;
}

void student :: display(){
    cout<<"name "<<name<<endl;
    cout<<"rollno "<<rollno<<endl;
}

int main() {
  student s1;
    s1.setter("Tarang Suryawanshi", 70);
    s1.display();
    return 0;
}
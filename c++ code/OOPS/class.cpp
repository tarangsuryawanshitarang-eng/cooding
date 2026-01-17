#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"roll : "<<rollno<<endl;
    }


};
int main() {
  Student s1;
    s1.name="Tarang Suryawanshi";
    s1.rollno=70;
    s1.display();

}

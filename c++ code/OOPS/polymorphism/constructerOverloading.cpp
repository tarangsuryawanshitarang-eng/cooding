#include <iostream>
using namespace std;
class student {
    public : 
    string name;
    int rollno;
    // constructer overloading  --> same name but different parameters

    // default constructor
    student(){

    }
    // parameterized constructor
    student ( string s , int r){
        name = s;
        rollno = r;

    }
     student ( string s ){
        name = s;
     }
     student ( int r ){
        rollno = r;
     }
    void display()
    {
        cout << "name : " << name << endl;
        cout << "rollno : " << rollno << endl;
    }
};
int main() {
  student s1("Tarang suryawanshi",70);
  s1.display();
  student s2("Tanish Patel");
  s2.rollno = 69;
  s2.display();
  student s3(49);
  s3.name="Ranjeet suryawanshi";
  s3.display();
}
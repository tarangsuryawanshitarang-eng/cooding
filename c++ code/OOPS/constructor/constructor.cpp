#include <iostream>
using namespace std;

class student {
    public : 
    string name;
    int rollno;

    // default constructor
    student(){

    }
    // constructor
    student ( string s , int r){
        name = s;
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
}
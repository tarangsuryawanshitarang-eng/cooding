#include <iostream>
using namespace std;
class student {
public:
string name;
int rollno;
// copy constructor
student ( student &s ){
   this -> name = s.name;
    this -> rollno = s.rollno;

}
// parameterized constructor
student ( string s , int r){
    name = s;
    rollno = r;

}
// inline display function
void display()
{
    cout << "name : " << name << endl;
    cout << "rollno : " << rollno << endl;
}

};
int main() {
  student s1 ("Tarang suryawanshi",70);
  student s2 = s1; // copy constructor
  s1.display();
  s2.display();
}
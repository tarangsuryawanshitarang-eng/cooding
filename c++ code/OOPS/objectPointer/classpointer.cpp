#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    // constructor
    student(string s , int r){
        name = s;
        rollno = r;
    }
    // inline f(x)
    void display(){
        cout << "name : " << name << endl;
        cout << "rollno : " << rollno << endl;
    }
};
int main() {

    // similar to dynamic memory allocation for primitive data types
    // int *ptr = new int(10);  --> for integer
    // int *arr = new int[10];  --> for array
    // student* ptr = new student("Tarang Suryawanshi",70); --> for object
   student* s1 = new student("Tarang Suryawanshi",70);
   (*s1).display();  // dereferencing method
   s1->display(); // arrow operator method

}
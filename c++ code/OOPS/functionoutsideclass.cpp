#include <iostream>
using namespace std;
class student {
public:
string name ;
int rollno;
};
// function outside class
void print( student &s){
cout<<"name "<<s.name<<endl;
    cout<<"rollno "<<s.rollno<<endl;
}
int main() {
  student s1= {"Tarang Suryawanshi", 70};
     print(s1);
}r
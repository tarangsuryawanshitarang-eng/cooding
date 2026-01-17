#include <iostream>
using namespace std;
class student {
public:
string name ;
int marks [3];
//function inside class
void display(){
    cout<<"name  : "<<name<<endl;
    cout<<"marks  : "<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<endl;
    cout<<"percentage : "<<percentage()<<" %"<<endl;
}
float percentage(){
    return (marks[0]+marks[1]+marks[2])/3;
}
// constructor 
student(string s, int m1, int m2, int m3){
    name = s;
    marks[0] = m1;
    marks[1] = m2;
    marks[2] = m3;
}
  // creatung default constructor for future purpose ;
  student(){}
  
};
int main() {
 student s1("Tarang Suryawanshi",85,90,95);
 s1.percentage();
 s1.display();
  
}
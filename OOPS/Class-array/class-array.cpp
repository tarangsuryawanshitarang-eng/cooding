//create a class array
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
    cout<<"name : "<<name<<endl;
    cout<<"rollno : "<<rollno<<endl;

}   
int main() {
  student s[3]; //array of objects
    s[0].setter("Tarang Suryawanshi", 70);
    s[1].setter("John Doe", 45);
    s[2].setter("Jane Smith", 88);
    for(int i=0; i<3; i++){
        s[i].display();
    }
    return 0;
}
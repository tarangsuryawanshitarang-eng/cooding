#include <iostream>
using namespace std;
class polymorphism{
    public:
// function overloading --> same name but different parameters
    void sum(int a , int b){
        cout<<"Sum of two integers : "<<a+b<<endl;
    }
    void sum(int a , int b , int c ){
        cout<<"Sum of two integers : "<<a+b+c<<endl;
    }
    void sum(string a , string b){
        cout<<"Sum of two strings : "<<a+b<<endl;
    }
    
};
int main() {
    polymorphism p1;
    p1.sum(5,10);
    p1.sum(5,10,15);
    p1.sum("Hello"," World");
}
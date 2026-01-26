#include <iostream>
using namespace std;
class set{
    int n , m;
    public :
    void input(void);
    void display(void);
    void largest(void);

};

void set :: input(void){
    cout<<"Enter two numbers : ";
    cin>>n>>m;
}

void set :: display(void){
    cout<<"The two numbers are : "<<n<<" and "<<m<<endl;
}

void set :: largest(void){
    if(n>m){
        cout<<"Largest number is : "<<n<<endl;
       
    }
    else{
        cout<<"Largest number is : "<<m<<endl;
    }
    
}

int main() {
    set s;
    s.input();
    s.display();
    s.largest();
    return 0;
}
#include <iostream>
using namespace std;
int main() {
  int a , b, t;
  cout<<"Tarang Suryawanshi"<<endl;
  cout<<"BTIR25O1070"<<endl;
  cout<<"Enter two numbers to find GCD : ";
    cin>>a>>b;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    cout<<"GCD of the number is "<<a;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int x =6;
    int* p = &x;
    cout<<&x<<" \n"<<p<<" \n";
    cout<<*p<<endl;
    cout<<&p<<"\n";
    *p = 4;
    cout<<*p<<"\n";                       //changes value without x, just by location
}
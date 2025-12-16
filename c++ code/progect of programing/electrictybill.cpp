#include<iostream>
using namespace std;
int main(){
    cout<<"© Tarang Suryawanshi\n";
cout<<"rollno"<<" "<<"BTIR25O1070\n";
    int unit;
    cout<<"enter the unit consume : ";
    cin>>unit;
    if (unit<=100) cout<<"Bill is :"<<5*unit<<endl;
    else if(unit <= 300) cout<<"bill is :"<<8*unit<<endl;
    else cout<<"bill is : "<<10*unit<<endl;
}
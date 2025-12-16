#include<iostream>
using namespace std;
int main(){
    cout<<"© Tarang Suryawanshi\n";
cout<<"rollno"<<" "<<"BTIR25O1070\n";
   int rate,time;
    cout<<"enter the rate per hour :";
    cin>>rate;
    cout<<"enter the work time : ";
    cin>>time;
    if(time>40) cout<<"salary is :"<<(40*rate)+((time-40)*rate*1.5);
    else cout<<"salary is :"<<time*rate;
}
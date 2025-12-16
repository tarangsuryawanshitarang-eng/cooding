#include<iostream>
using namespace std;
int main(){
    cout<<"© Tarang Suryawanshi\n";
cout<<"rollno"<<" "<<"BTIR25O1070\n";
   int amount;
   cout<<"enter the amount :";
   cin>>amount;
   if(amount >= 5000) cout<<"After discount amount is :"<<amount-(amount*20/100)<<endl;
    else if(amount >= 2000) cout<<"After discount amount is :"<<amount-(amount*10/100)<<endl;
    else cout<<"no discount so amount is :"<< amount<<endl;
}  
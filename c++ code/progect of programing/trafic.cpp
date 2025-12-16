#include<iostream>
using namespace std;
int main(){
   cout<<"© Tarang Suryawanshi\n";
cout<<"rollno"<<" "<<"BTIR25O1070\n";
    string abc;
    cout<<"enter the Traffic Light : ";
    cin>>abc;
    if(abc=="Red" || abc=="red" ) cout<<"stop.\n";
      else if(abc=="Yellow" || abc=="yellow") cout<<"Read to move.\n";
       else  if(abc=="Green" || abc=="green") cout<<"Go.\n";
         else  cout<<"invalid Signal.\n";
}
#include<iostream>
using namespace std;
int main(){
     cout<<"© Tarang Suryawanshi\n";
cout<<"rollno"<<" "<<"BTIR25O1070\n";
  int n;
  cout<<"enter the 4 digit number :";
  cin>>n;
  int sum=0;
   sum=sum+n%10;
    n=n/10;
    sum=sum+n%10;
    n=n/10;
    sum=sum+n%10;
    n=n/10;
    sum=sum+n%10;
    n=n/10;
    cout<<"sum of digits is: "<<sum<<endl;
    
}
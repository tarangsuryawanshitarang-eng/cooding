#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the number:";
    cin>>a;
     cout<<"enter the number :";
    cin>>b;
     cout<<"enter the number:";
    cin>>c;
    if(a<b and a<c){
        cout<<a<<"is the smallest :";
    }
   else if(b<a and b<c){
        cout<<b<<"is the smallest :";
    }
else cout<<c<<"is the smllest";
 }
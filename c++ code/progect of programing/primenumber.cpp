#include<iostream>
using namespace std;
int main(){
     cout<<"© Tarang Suryawanshi\n";
    cout<<"rollno"<<" "<<"BTIR25O1070\n";   
    for(int i =1;i<7;i++){ 
          int n;
    cout<<"enter the no :";
    cin>>n;
    bool x =true;
for(int i=2;i<n;i++){
    if(n%i ==0){
        x=false;
         break; 
      }
    }
    if(n==0) cout<<"neither prime nor composite"<<endl;
     if(n==1) cout<<"neither prime nor composite"<<endl;
     else if(x ==true) cout<<"prime no"<<endl;
     else cout<<"composit no"<<endl;   }
   }

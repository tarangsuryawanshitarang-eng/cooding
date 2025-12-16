

// do n+1-i in all




#include<iostream>
using namespace std;
int main(){
   {
int n,m;
    cout<<"enter the number :";
    cin>>n;
for(int i=1;i<=n;i++){ 
    for(int j=1;j<=n+1-i;j++){
     cout<<i;
 }
 cout<<endl;
}
} 
}
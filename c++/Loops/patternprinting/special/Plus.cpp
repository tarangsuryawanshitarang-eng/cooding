
#include<iostream>
using namespace std;
int main(){
    int n =9;
    // cout<<"enter the number :";
    // cin>>n;
for(int i=1;i<=n;i++){ 
//if(n%2==0){ cout<<"enter odd number even not allowed :";
 //   break;}
    for(int j=1;j<=n;j++){
       if(i==n/2+1 or j==n/2+1) cout<<"* ";
       else cout<<"  ";
    }
    cout<<endl;
}
 }
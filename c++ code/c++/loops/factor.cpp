// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number :";
//     cin>>n;
// for(int i=n/2;i>=1;i--){
//    if(n%i==0) {
//     cout<<"factor of given number are :";
//     cout<<i<<" ";
//    }
// }
//  }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
for(int i=n/2;i>=1;i--){
  if(n%i==0){
cout<<"Greatest factor of given number is :";
cout<<i<<endl;
    break;}
}
 }

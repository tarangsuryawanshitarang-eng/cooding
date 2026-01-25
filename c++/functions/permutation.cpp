#include<iostream>
using namespace std;
int fact(int x){
     int fact =1;
for( int i=1;i<=x; i++){ 
fact *=i;
 }
 return fact;
}
int main(){
   int n;
   cout<<"enter thr n :";
   cin>>n;
      int r;
   cout<<"enter thr r :";
   cin>>r;
    int a= fact(n);
      int b= fact(n-r);
 cout<<"factorial of n-r :"<<b<<endl;
cout<<"permutation is :"<<a/(b);
}
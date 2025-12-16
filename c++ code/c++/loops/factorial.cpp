// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number :";
//     cin>>n;
//    long long  unsigned int sum =1;
// for( int i=1;i<=n; i++){ 
// sum *=i;
//  }
//     cout<<sum;
//  }



#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
 unsigned long long int sum =1;                  //only up to 20!
for( int i=1;i<=n; i++){ 
sum = sum*i;
    cout<<i<<" "<<sum<<endl;
  }
 }
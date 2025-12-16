#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"ennter the number :";
  cin>>n;
  int sum=0;
  int rev=0;
  while(n!=0){
    int ld=n%10;
     n =n/10;
      sum +=ld;
    rev *=10;
    rev +=ld; 
  }
    cout<<"reverse of the number is:"<<rev<<endl;
  cout<<"sum of the number is:"<<sum<<endl;
}
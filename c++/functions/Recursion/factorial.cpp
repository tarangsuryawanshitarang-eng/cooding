#include<iostream>
using namespace std;
 int fact(int n){
    if(n==1 || n==0) return 1;            //base case
    return n * fact(n-1);                 // work + call
}
int main(){
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int n= 11;
   for(int i = 0 ; i <= n ; i++){      //print factorials from 0 to n
       cout<<"Factorial of "<<i<<" is : "<<fact(i)<<endl;
   }
 }
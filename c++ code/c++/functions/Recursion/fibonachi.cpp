#include<iostream>
using namespace std;
 int fibo(int n){
    if (n == 0) return 0;
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int n= 10;
   for(int i = 0 ; i <= n ; i++){      //print n fibonacci series
       cout<<fibo(i)<<" ";
   }
 }
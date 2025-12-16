#include<iostream>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    return n + sum(n-1);
}
int main(){
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int n;
    cout<<"enter n :";
    cin>>n;
   cout<<"sum is :"<<sum(n);
 }
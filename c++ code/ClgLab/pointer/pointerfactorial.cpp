#include<iostream>
using namespace std;
unsigned long long int fact(int * n){
    if(*n==1 || *n==0) return 1;            //base case
    int temp = *n - 1;
    return* n * fact(&temp);                 // work + call
}
int main(){
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int n;
    cout<<"enter the number : ";
    cin>>n;
   cout<<"factorial is :"<<fact(&n);
 }
#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;      // base case
        print(n-1);         // call
    cout<<n<<" ";        // work 

}
int main(){
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int n;
    cout<<"enter n :";
    cin>>n;
   print(n);
 }
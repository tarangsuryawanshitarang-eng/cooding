#include<iostream>
using namespace std;
 int pow(int n, int b){
    if(b==0) return 1;            //base case
    else if(b==1) return n;       // base case  
    return n * pow(n,b-1);          // work + call
}
int main(){
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int a= 2, b = 4;
   cout<<"base : "<<a<<"  power : "<<b<<" Result  : "<<pow(a,b);
 }







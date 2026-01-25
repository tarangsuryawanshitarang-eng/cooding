#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;        //basecase
    cout<<n<<" ";          // work
    print(n-1);            // call
}
int main(){
    int n=9;
   print(n);
 }
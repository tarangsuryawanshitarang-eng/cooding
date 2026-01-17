#include <iostream>
#include<cmath>
using namespace std;
int main() {
  cout<<"Tarang Suryawanshi"<<endl;
  cout<<"BTIR25O1070"<<endl;
  int a , b , gcd = 1;
  cout<<"enter the numbers : ";
    cin>>a>>b;
    int n = min(a,b);
    for(int i = 1 ; i <= n ; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            a /= i;
            b /= i;
            gcd *= i;
        }
    
    }
    cout<<"GCD of the numbers is "<<gcd;
    return 0;
}
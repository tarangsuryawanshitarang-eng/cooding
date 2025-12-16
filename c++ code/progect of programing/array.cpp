#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";

  int arr [10];
  float brr [10];
  cout<<"start entering the array : ";
  for ( int i = 0 ; i < 10 ; i ++)
  {
    cin>>arr[i];

    if(i % 2 ==0 ) brr[i] =  log2(arr[i]);
    else  brr[i]= cbrt(arr[i]);
  }
  for ( int i = 0 ; i < 10 ; i ++)
  {
    cout<<"brr["<<i<<"] : "<<brr[i]<<endl;
  }
}
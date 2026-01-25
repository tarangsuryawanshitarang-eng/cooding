#include <iostream>
using namespace std;
int main()
{
     int arr[] = {1,2,3,4,5,6};  
      int product = 1;
      int n = sizeof(arr)/4;          // sizeof gives size of variable (array takes 4 bit of size)
    for(int i = 0 ; i < n ; i++)
    { 
      product *= arr[i];
    }
         cout<<product<<endl;
} 
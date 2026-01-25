#include <iostream>
using namespace std;
int main()
{
     int arr[] = {1,2,3,4,5,6}; 
      int n = sizeof(arr)/4;          // sizeof gives size of variable (array takes 4 bit of size)
    int mn = arr[0];
    for(int i = 1 ; i < n ; i++)
    { 
     //if(arr[i] < mn ) mn = arr[i];
     mn = min(mn, arr[i]);
    }
         cout<<mn<<endl;
} 
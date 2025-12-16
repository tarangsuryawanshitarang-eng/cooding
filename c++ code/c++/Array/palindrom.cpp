
 #include <iostream>
using namespace std;
int main()
{     
    int arr[] = {1,2,3,4,5,6,7};
     int n= sizeof(arr)/4;           // formate
     for(int i = 0 ; i < n ; i++) 
     {
        arr[i]=arr[n-1-i];
     }
   for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
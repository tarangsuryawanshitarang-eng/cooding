//  Write a program to  store arr1 into arr2 in reverse order
 #include <iostream>
using namespace std;
int main()
{     
    int arr[7] = {1,2,3,4,5,6,7};
     int brr[7];
     int n= sizeof(arr)/4;           // formate
     for(int i = 0; i < n ; i++)
     {
        int j= n-1-i;
        brr[i]=arr[j];
           cout<<brr[i]<<" ";
     }
   
    
    
}
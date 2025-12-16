#include <iostream>
using namespace std;
int main()
{
     int arr[] = {1, 2, 3, 4, 5};
     int brr[] = {7, 8, 9, 11};
     int n = sizeof(arr) / 4;
     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << " ";
     }
     cout << endl;
     cout << "address of the array : " << &arr[5] << endl;
     cout << "addres of 0th element : " << &arr[0] << endl;
     cout << "size : " << sizeof(arr)<<endl;


     cout<<"sum of arr and brr : ";
     for (int i = 0; i < n; i++)
     {
          cout<<arr[i]+brr[i] << " ";
     }


     // which element , which index , what value 
     for(int i =  0 ; i < n ; i++)
     {
          cout<<"it is " <<i + 1<<"th element of array " << " index of it is : "<< i <<"value is : "<<arr[i]<<endl;
     }



}
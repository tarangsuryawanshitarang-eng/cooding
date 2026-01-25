 //reverse printing
 #include <iostream>
using namespace std;
int main()
{
   // int arr[] = {1,2,3,4,5,6,7};        when doing declaration and initilation simultaniously
    int arr[7] = {1,2,3,4,5,6,7};
    for(int i = 6 ; i >= 0 ; i--)
    {
         cout<<arr[i]<<" ";   //reverse printing
    }
}
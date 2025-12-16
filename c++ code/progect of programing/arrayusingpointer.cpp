#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *brr = arr;
    cout<<"elements of array using pointer array : ";
    for (int i = 0; i < 10; i++) {
       cout<<brr[i]<<" ";
    }
}   

    
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"before soarting : ";
    for (int x : arr)
        cout << x << " ";

    sort(arr, arr + n); // ascending

    cout<<"\nafter soarting : ";
    for (int x : arr)
        cout << x << " ";
}

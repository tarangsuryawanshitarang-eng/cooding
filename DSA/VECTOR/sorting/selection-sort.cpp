#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 5, 6, 8, 2, 3, 1, 9, 7};
    int n = sizeof(arr) / sizeof(int);
    cout<<"Original Array : ";
    for(int a :arr){
        cout<<a<<" ";
     }
    for (int i = 0; i < n - 1; i++)
    {
        int mx = arr[i];
        int idmax = i;
        for (int j = i + 1; j < n; j++)
        {
            if (mx > arr[j])
            {
                mx = arr[j];
                idmax = j;
            }
        }
        swap(arr[i], arr[idmax]);
    } 
    cout << endl;
    cout << "Sorted Array : ";
    for (int a : arr)
    {
        cout << a << " ";
    }
}
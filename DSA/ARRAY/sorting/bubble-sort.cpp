#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {4, 5, 6, 8, 2, 3, 1, 9, 7};
    int n = sizeof(arr) / sizeof(int);
    cout <<"Original Array : ";
    for (int i = 0; i < n; i++) cout << arr[i] << " "; 
    cout << endl;
    
    for (int i = 0; i < n - 1; i++)
    {
        int swapcount = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapcount++;
            }  
        }
        if (swapcount == 0)
            break;
    }
    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
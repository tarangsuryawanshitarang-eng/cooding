#include <iostream>
using namespace std;
int maxIndex(int arr[], int n)
{
    int mx = -1;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
            index = i;
        }
    }
    return index;
}
int main()
{
    int arr[] = {10, 15, 3, 7, 8, 5, 2, 12, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = maxIndex(arr, n);
    arr[i] = -1; // remove the largest element
    int i2 = maxIndex(arr, n);
    cout << "The second largest element is: " << arr[i2];
}
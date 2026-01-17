#include <iostream>
using namespace std;
int singelelement(int arr[], int n)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
        {
            return arr[mid];
        }
        else if (arr[mid - 1] == arr[mid])
        {
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 1, 1, 2, 3, 3, 4, 4, 4, 5, 5, 6, 6, 6, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << "the singelelement is : " << singelelement(arr, n) << endl;
}
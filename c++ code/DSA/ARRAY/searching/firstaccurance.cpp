#include <iostream>
using namespace std;

int main()
{
    int target;
    cout << "enter the target value : ";
    cin >> target;

    int arr[] = {1, 2, 3, 4, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    int left = 0, right = n - 1;

    int result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            if (arr[mid - 1] == target)
            {
                result = mid;
                right = mid - 1;
            }
            else
            {
                cout << "first occurence index is : " << mid << endl;
                return 0;
            }
        }
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    if (result != -1) cout << "first occurence index is : " << result << endl;
    else cout << "target not found" << endl;
}

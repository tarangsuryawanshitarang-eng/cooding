#include <iostream>
using namespace std;
int main()
{
    int n= 10;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target= 26;
    // ..........................//
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                found = true;
            }
        }
    }
    if (!found)
    {
        cout << "No pair found with the given target sum." << endl;
    }
    return 0;
}
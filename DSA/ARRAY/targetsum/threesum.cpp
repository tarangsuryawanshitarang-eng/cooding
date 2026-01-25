#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 5, 1, 3, 7, 9, 2, 8, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 16;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 2; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout << "Triplet found: (" << arr[i] << " , " << arr[j] << " , " << arr[k] << ")" << endl;
                }
            }
        }
    }
}

// use int i = 0 ; j = i + 1 and k = j + 2 to avoid repetition of elements in triplet
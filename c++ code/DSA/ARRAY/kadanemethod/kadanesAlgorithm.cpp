#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "your array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int maxsum=0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxsum = max(sum,maxsum);
        if (sum < 0)
            sum = 0;
    }
    cout << "max sub array sum is : " << maxsum;
}
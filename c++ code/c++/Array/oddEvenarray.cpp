#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 5, 7, 8, 10, 3};
    int even = 0, odd = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Even: " << even << ", Odd: " << odd;
    return 0;
}
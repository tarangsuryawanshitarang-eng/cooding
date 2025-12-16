#include <iostream>
using namespace std;
int main()
{
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int arr[] = {12, 5, 7, 8, 10, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Your array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Even: " << even << ", Odd: " << odd;
    return 0;
}

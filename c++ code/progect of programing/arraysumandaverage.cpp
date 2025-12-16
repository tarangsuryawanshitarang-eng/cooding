#include <iostream>
using namespace std;
int main()
{
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";

    int arr[5] = {5, 10, 15, 20, 25};
    int n = 5;
    cout << "your array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += arr[i];
    cout << "Sum = " << sum << ", Average = " << (float)sum / 5;
    return 0;
}

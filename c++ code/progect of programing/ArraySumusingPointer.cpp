#include <iostream>
using namespace std;

int main()
{
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int arr[] = {2, 4, 6, 8};
    int *p = arr, sum = 0;
    int n = 4;
    cout << "Your array is: ";
    for (int i = 0; i < n; i++)
        cout << *(p + i) << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
        sum += *(p + i);
    cout << "Sum = " << sum;
    return 0;
}
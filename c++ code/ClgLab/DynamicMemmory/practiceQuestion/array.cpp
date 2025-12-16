#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];   // allocate array

    for (int i = 0; i < n; i++)
        arr[i] = (i+1)* 10;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    delete[] arr;            // free array memory
    return 0;
}

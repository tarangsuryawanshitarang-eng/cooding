#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};

    cout << "Display using index:\n";
    for(int i = 0; i < 5; i++)
        cout << "arr[" << i << "] = " << arr[i] << endl;

    cout << "\nDisplay using dereference:\n";
    for(int i = 0; i < 5; i++)
        cout << "*(arr + " << i << ") = " << *(arr + i) << endl;

    return 0;
}

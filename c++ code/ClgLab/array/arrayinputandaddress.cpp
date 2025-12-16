#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for(int i = 0; i < 5; i++){
        cout << "Enter element at index " << i 
             << " (position " << i+1 << "): ";
        cin >> arr[i];
    }

    cout << "\nYour array is:\n";
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    cout << "\n\nAddresses of array:\n";
    for(int i = 0; i < 5; i++)
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
  
    return 0;
}
 
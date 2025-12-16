#include <iostream> 
using namespace std; 
 
int main() {
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n"; 
    int arr[10] = {10, 20, 30, 40, 50}; 
    int n = 5, pos = 2, val = 99; 
    cout << "Original array: "; 
    for(int i = 0; i < n; i++) cout << arr[i] << " "; 
    cout << endl;
    for(int i = n; i > pos; i--) 
        arr[i] = arr[i-1]; 
    arr[pos] = val; 
    n++; 
    cout << "After insertion: "; 
    for(int i = 0; i < n; i++) cout << arr[i] << " "; 
    return 0; 
}
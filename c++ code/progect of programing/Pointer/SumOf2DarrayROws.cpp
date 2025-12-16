#include <iostream> 
using namespace std; 
 
int main() {
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int arr[2][3] = {{1,2,3},{4,5,6}}; 
    int (*ptr)[3] = arr; 
 
     cout << "Given 2D array . " << endl;
    for(int i = 0; i < 2; i++) { 
        for(int j = 0; j < 3; j++) 
            cout << *(*(ptr + i) + j) << " "; 
        cout << endl;
    }
    for(int i = 0; i < 2; i++) { 
        int sum = 0; 
        for(int j = 0; j < 3; j++) 
            sum += *(*(ptr + i) + j); 
        cout << "Sum of row " << i+1 << " = " << sum << endl; 
    } 
    return 0; 
} 
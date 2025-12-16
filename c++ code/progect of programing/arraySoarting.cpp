#include <iostream> 
using namespace std; 
 
int main() { 

    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int arr[] = {5, 1, 4, 2, 8}; 
    int n = 5; 
    cout << "Original Array: "; 
    for(int i = 0; i < n; i++) cout << arr[i] << " "; 
    cout << endl;
 
    for(int i = 0; i < n-1; i++) 
        for(int j = i+1; j < n; j++) 
            if(arr[i] > arr[j]) 
                swap(arr[i], arr[j]); 
 
    cout << "Sorted Array: "; 
    for(int i = 0; i < n; i++) cout << arr[i] << " "; 
    return 0; 
}
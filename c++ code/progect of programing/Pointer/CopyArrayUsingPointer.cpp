#include <iostream> 
using namespace std; 
 
int main() { 
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int arr[] = {1, 2, 3, 4, 5}; 
    int brr[5]; 
    int *p1 = arr, *p2 = brr; 
 cout<< "Original Array arr: ";
    for(int i = 0; i < 5; i++) 
        cout << *(p1 + i) << " ";
    cout << endl; 
    for(int i = 0; i < 5; i++) 
        *(p2 + i) = *(p1 + i); 
 
    cout << "Copied Array brr: "; 
    for(int i = 0; i < 5; i++) cout << brr[i] << " "; 
    return 0; 
} 
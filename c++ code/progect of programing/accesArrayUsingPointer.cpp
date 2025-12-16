#include <iostream> 
using namespace std; 
 
int main() { 
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int arr[] = {5, 10, 15, 20};    
    int n = 4;
    int *ptr = arr; 

 
    cout << "Elements using pointer: "; 
    for(int i = 0; i < n; i++) 
        cout << *(ptr + i) << " "; 
    return 0; 
} 
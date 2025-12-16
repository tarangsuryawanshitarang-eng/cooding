#include <iostream> 
using namespace std; 
 
int main() { 

    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int a[] = {1, 3, 5}; 
    int b[] = {2, 4, 6}; 
    int c[6], i, j; 
    cout << "Array 1 : "; 
    for(i = 0; i < 3; i++) cout << a[i] << " "; 
    cout << endl;
    cout << "Array 2 : ";
    for(j = 0; j < 3; j++) cout << b[j] << " ";
    cout << endl;
    for(i = 0; i < 3; i++) c[i] = a[i]; 
    for(j = 0; j < 3; j++) c[i + j] = b[j]; 
 
    cout << "Merged array: "; 
    for(int k = 0; k < 6; k++) cout << c[k] << " "; 
    return 0; 
}
#include <iostream> 
using namespace std; 
 
int main() { 

    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int arr[] = {10, 50, 30, 70, 40}; 
    int *p = arr; 
    int max = *p; 
    int n = 5;
    cout<< "Your array is : ";
    for(int i = 0; i < n; i++)
        cout << *(p + i) << " ";
    cout << endl;
    for(int i = 1; i < n; i++) 
        if(*(p + i) > max) max = *(p + i); 
    cout << "Maximum using pointer = " << max; 
    return 0; 
}
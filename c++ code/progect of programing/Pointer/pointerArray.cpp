#include <iostream> 
using namespace std; 
 
int main() { 
    cout << "© Tarang Suryawanshi\n";
    cout << "rollno" << " " << "BTIR25O1070\n";
    int a = 10, b = 20, c = 30; 
    int *arr[3] = {&a, &b, &c}; 
    cout<<"a: "<<a<<"  "<<"b: "<<b<<"  "<<"c: "<<c<<endl;
cout<<"featching values using pointer array : ";
    for(int i = 0; i < 3; i++) 
        cout << *arr[i] << " "; 
    return 0; 
}
#include <iostream>
using namespace std;
  
 int function(){
    int a = 10; // local variable
    cout << "Value of local variable a: " << a << endl;
    return 0;

 }
int main() {
    function();
    // cout << "Value of local variable a in main: " << a << endl; // This will cause an error
    return 0;
}
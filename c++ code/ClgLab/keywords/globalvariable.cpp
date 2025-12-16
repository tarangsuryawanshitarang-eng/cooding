#include <iostream>
using namespace std;
 
extern int a; // Declaration of global variable
int a = 5;    // Definition and initialization of global variable
int fx()
{
    ++a;
    return a;
}
int main()
{
    
    fx();
    cout << "Value of global variable by calling fx(): " << a << endl;
    ++a;
    cout << "Value of global variable a: " << a << endl;
    fx();
    cout << "Value of global variable by calling fx() again: " << a << endl;
    return 0;
}

// conclusion: Global variable can be accessed and modified inside functions.   
// The changes made to the global variable inside functions exist outside the function scope.
#include <iostream>
using namespace std;
int main() {
 int*  a = new int ;
 *a=5;
 cout << *a<<endl; 
 delete a;
 *a=7;
 cout << *a; 
}
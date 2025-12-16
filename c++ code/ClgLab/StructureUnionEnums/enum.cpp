#include <iostream>
using namespace std;
int main() {
    
    cout<<"enum\n";
    enum meal
    {
      breakfast,
      lunch,
      dinner
    };
  //**now meal have become a bata type , and have indec o 1 2  */
  // APPLICATION OF meal data type;
  meal a = breakfast; //   --->a == 0 ;
  meal b = lunch;     //   --->b == 1 ;
  meal c = dinner;    //   --->c == 2 ;

  cout << "a = " << a << "\n";
  cout << "b = " << b << "\n";
  cout << "c = " << c << "\n"; 
}
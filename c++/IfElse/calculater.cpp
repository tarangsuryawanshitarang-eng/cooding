#include <iostream>
using namespace std;
int main()
{
  int a;
  char x;
  int b;
  cout << "© Tarang Suryawanshi\n";
  cout << "rollno" << " " << "BTIR25O1070\n";
  cout << "enter first number :";
  cin >> a;
  cout << "enter second number :";
  cin >> b;
  cout << "enter the operation (+ - * / %) : ";
  cin >> x;
  if (x == '+')
    cout << a + b;
  else if (x == '-')
    cout << a - b;
  else if (x == '*')
    cout << a * b;
  else if (x == '/')
    cout << a / b;
  else if (x == '%')
    cout << a % b;
  else
    cout << "invalid opperator.";
}

#include <iostream>
using namespace std;
int fact(int x)
{
   int a = 1;
   for (int i = 1; i <= x; i++)
   {
      a *= i;
   }
   return a;
}
int main()
{
   int n;
   cout << "enter thr n :";
   cin >> n;
   int r;
   cout << "enter thr r :";
   cin >> r;
   int a = fact(n);
   int b = fact(r);
   int c = fact(n - r);

   cout << "factorial of n-r :" << c << endl;
   cout << "permutation is :" << a / (b * c);
}
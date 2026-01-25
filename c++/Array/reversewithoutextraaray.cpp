//  Write a program to  store arr1 into arr2 in reverse order
#include <iostream>
using namespace std;
int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7};
   int n = sizeof(arr) / 4; // formate
   for (int i = 0; i < n; i++)
   cout << arr[i] << " ";
   cout << endl;

   
   int i = 0;
   int j = n - 1;
   while (i < j)
   {
      int temp = arr[i]; // see formate
      arr[i] = arr[j];
      arr[j] = temp;
      i++; // imp
      j--; // imp
   }
   for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
}
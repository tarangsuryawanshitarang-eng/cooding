#include <iostream>
using namespace std;
int main() {
  int a = 10 , b = 20, c = 30;
  int* arr[]={&a, &b, &c};
  int** ptr = arr;
  for(int i=0; i<3; i++) {
    cout << *(ptr + i) << " ";
    cout << **(ptr + i) << " \n";
  }
}

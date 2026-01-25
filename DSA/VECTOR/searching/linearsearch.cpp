#include <iostream>
using namespace std;
int main() {
  
  int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(int);
    int target;
    cout << "Enter the number to search: ";
    cin >> target;
    for(int a : arr){
        if(a == target){
            cout << "Element found : " << a << endl;
            return 0;
        }

    } 
    cout << "Element not found." << endl;
    return 0;
}

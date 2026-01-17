#include <iostream>
using namespace std;
int main() {
    cout<<"Tarang Suryawanshi"<<endl;
    cout<<"BTIR25O1070"<<endl;
  int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(int);
    int target;
    cout << "Enter the number to search : ";
    cin >> target;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            cout << "Element found at index : " << i << endl;
            return 0;
        }

    } 
    cout << "Element not found." << endl;
    return 0;
}
#include <iostream>
 using namespace std;
int main() {
  int arr[] = {4, 5, 6, 8, 2, 3, 1, 9, 7};
    int n = sizeof(arr) / sizeof(int);

    cout<<"Original Array : ";
    for(int a :arr)  cout<<a<<" ";

    for(int i = 0;i<n-1;i++){
        int j = i +1;
        while(j>=1 && arr[j]>arr[j-1]) swap(arr[j--],arr[j-1]);
    }
    
    cout << endl;
    cout << "Sorted Array : ";
    for (int a : arr) cout << a << " ";
    
}
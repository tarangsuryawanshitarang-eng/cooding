#include <iostream>
using namespace std;

//<!--creating partition function -->
int partition(int arr[], int pivot , int low , int high){
     int start = low;
     for(int i  = low ; i < high ; i++){
        if(arr[i] <= pivot){
            swap(arr[i], arr[start]);
            start++;
        }
     }
     swap(arr[start], arr[high]);
     return start;
}

//<!--creating quick sort function -->
void Quicksort(int arr[], int low , int high){
    if(low >= high) return; //<!--base case -->
    int pivot = arr[high]; //<!--choosing pivot -->
   int pivot_idx = partition(arr, pivot, low, high);
    Quicksort(arr, low, pivot_idx - 1); //<!--left half -->
    Quicksort(arr, pivot_idx + 1, high); //<!--right half -->
}

int main() {
  int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr) / sizeof(int);

    cout << "original array: ";
    for (int element : arr) cout << element << " ";

    cout<<endl;
    Quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int element : arr) cout << element << " ";
    cout<<endl;
}
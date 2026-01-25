#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> &arr , int  target){
    int n = arr.size();
    int left = 0;
    int right = n - 1;  // size se 1k kam hota hai last index.
    while(left <= right){
        int mid = left + (right - left) / 2; // to avoid overflow
        if(arr[mid] == target){
            return mid; // target found at index mid
        }
        else if(arr[mid] < target){
            left = mid + 1; // search in the right half
        }
        else{
            right = mid - 1; // search in the left half
        }
    }

    
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;
    cout << "target element is on index: " << binarysearch(arr1, target) << endl;
  
}
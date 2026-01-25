//recursive binary search in c++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarysearch(vector<int> &arr, int target, int left, int right) {
    if (left > right) {
        return -1;
    }
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == target) {
        return mid;
    }
    else if (target > arr[mid]) {
        return binarysearch(arr, target, mid + 1, right);
    }
    else {
        return binarysearch(arr, target, left, mid - 1);
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 4, 5, 6, 7, 8, 9};
    sort(arr.begin(), arr.end()); // Binary search requires sorted array
    
    int target;
    cout << "Enter the target: ";
    cin >> target;
    
    cout << "Target element is at index: " << binarysearch(arr, target, 0, arr.size() - 1) << endl;
    
    return 0;
}
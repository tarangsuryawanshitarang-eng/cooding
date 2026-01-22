// Find the first  missing number in a unique positive sorted array
#include <iostream>
using namespace std;
int main() {
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
    int n  = sizeof(arr)/4;
    int left = 0, right = n-1; 

    int missing_number =n;


    while(left <= right){
        int mid = left + (right - left)/2;
        if (mid != arr[mid]){
            missing_number = mid;
            right = mid -1;
        }
        else left = mid +1;
    }
    cout<<"first missing non negative number is : "<< missing_number <<endl;
}
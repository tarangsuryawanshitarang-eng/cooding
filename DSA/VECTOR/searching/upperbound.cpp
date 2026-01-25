// // given a sorted array and a target target find its lower bound index
// #include <iostream>
// using namespace std;
// int main()
// {
//     int target;
//     cout << "enter the target value : ";
//     cin >> target;
//     int arr[] = {1, 2, 3, 4, 4, 5, 6, 7, 8, 9};
//     int n = sizeof(arr) / sizeof(int);

//     int left = 0, right = n;
//     while (left < right)
//     {
//         int mid = left + (right - left) / 2;
//         if (mid > 0 && arr[mid] == target)
//         {
//             if (arr[mid + 1] == target) left = mid + 1;
            
//             else
//             {
//                 cout << "upper bound index is : " << mid << endl;
//                 return 0;
//             }
//         }
//         else if (arr[mid] < target) left = mid + 1;
//         else right = mid ;
        
//     }
//     cout << "upper bound index is : " << right << endl;
    
// }
#include <iostream>
using namespace std;

int main() {
    int target;
    cout << "Enter target: ";
    cin >> target;

    int arr[] = {1,2,3,4,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);

    int left = 0, right = n;

    while(left < right) {
        int mid = left + (right - left)/2;

        if(arr[mid] <= target) left = mid + 1;
        else right = mid;
    }

    if(left < n) cout << "Upper Bound Index: " << left << endl;
    else cout << "Upper Bound Not Found" << endl;
}

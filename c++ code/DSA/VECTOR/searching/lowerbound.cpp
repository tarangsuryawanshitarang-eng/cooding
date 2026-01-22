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

//     int left = 0, right = n - 1;
//     while (left <= right)
//     {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == target)
//         {
//             if(arr[mid-1]== target){
//                 right = mid -1;
            
//             }
//             else{
//                 cout << "lower bound index is : " << mid << endl;
//                 return 0;
//             }

            
//         }
//         else if (arr[mid] < target)
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             right = mid - 1;
//         }
//     }
//     cout << "lower bound index is : " << left << endl;
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

        if(arr[mid] < target) left = mid + 1;
        else right = mid;
    }

    if(left < n) cout << "Lower Bound Index: " << left << endl;
    else cout << "Lower Bound Not Found" << endl;
}

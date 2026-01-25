#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = v.size();
    int left = 0;
    int right = n - 1;
    while (left < right) {
        if (v[left] % 2 == 0) {
            left++;
        } else if (v[right] % 2 == 1) {
            right--;
        } else {
            swap(v[left], v[right]);
            left++;
            right--;
        }
    }
    cout << "Sorted array : ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
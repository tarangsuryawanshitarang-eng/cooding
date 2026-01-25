#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / 4;
    int i = 0, j = n - 1;
    int target = 26;
    while (i < j)
    {
        int psum=arr[i]+arr[j];
        if(psum>target) j--;
        else if(psum<target) i++;
    else{
        cout<<i<<" "<<j;
        break;
    } 
    }
}
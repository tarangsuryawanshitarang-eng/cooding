#include <iostream>
using namespace std;
#include <vector>
vector<int> majority(vector<int> nums, int n)
{
    vector<int> ans;
    for(int i : nums){          // travese through all nums and print i --> element;
        int count=0;
        for(int j : nums){
            if(j==i) count++;
        }
        if (count > n)
    {
        ans.push_back(i);
    }
    }

    
    return ans;
}
main()
{
    vector<int> nums = { 1, 2, 2, 1, 1 };
    int n = nums.size() / 2;

    cout << "your vector : ";
    for (int i : nums)
    {
        cout << i << " ";
    }
    vector<int> ans = majority(nums, n);
    cout << "\nmajority element : " << ans[0];
}
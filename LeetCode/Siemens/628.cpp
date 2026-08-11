#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();

        return max(nums[n-1]*nums[n-2]*nums[n-3], nums[0]*nums[1]*nums[n-1]);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,4};
    cout<<obj.maximumProduct(vec);
}


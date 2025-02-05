#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    unordered_map<int, int>memo;
public:
    int recursion(vector<int>& nums, int val)
    {
        if(memo.count(val))
            return memo[val];

        int res=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(val<nums[i])
                break;
            res += recursion(nums, val-nums[i]);
        }

        return memo[val] = res;
    }
    int combinationSum4(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        memo[0] = 1;
        return recursion(nums, target);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,3};
    cout<<obj.combinationSum4(vec, 4);
}


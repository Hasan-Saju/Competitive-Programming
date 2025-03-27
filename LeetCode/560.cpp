#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subarraySum(vector<int>& nums, int k)
    {
        unordered_map<int, int>prefix;
        prefix[0] = 1;
        int currentSum = 0;
        int ans = 0;

        for(auto num:nums)
        {
            currentSum +=num;
            int diff = currentSum-k;
            ans+=prefix[diff];
            prefix[currentSum]++;
        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {-1,-1,1};
    cout<<obj.subarraySum(vec,0);
}

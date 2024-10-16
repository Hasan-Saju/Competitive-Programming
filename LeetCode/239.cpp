#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int check(vector<int>& nums, int start, int endd)
    {
        int mx = INT_MIN;
        for(int i=start; i<endd; i++)
            mx = max(mx, nums[i]);

        return mx;
    }

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>result;
        int maxx = INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            if(i<k)
            {
                maxx = max(maxx, nums[i]);

                if(i==k-1)
                    result.push_back(maxx);

                continue;
            }
            int backk = i-k;
            if(nums[backk] == maxx)
            {
                maxx = check(nums, backk+1, i);
            }
            maxx = max(maxx, nums[i]);
            result.push_back(maxx);
        }

        return result;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1, -1};
    vector<int>ans = obj.maxSlidingWindow(vec,1);

    for(auto x: ans)
        cout<<x<<" ";
}



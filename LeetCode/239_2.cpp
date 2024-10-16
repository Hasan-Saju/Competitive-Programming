#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        vector<int>result;
        deque<int>q;
        int l=0;
        int r = 0;

        while(r<nums.size())
        {
            while(!q.empty() and q.back()<nums[r])
                q.pop_back();
            q.push_back(r);

            if(l>q.front())
                q.pop_front();

            if(r+1>=k)
            {
                result.push_back(nums[q.front()]);
                l++;
            }
            r++;
        }
        return result;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,3,-1,-3,5,3,6,7};
    vector<int>ans = obj.maxSlidingWindow(vec,3);

    for(auto x: ans)
        cout<<x<<" ";
}



#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        vector<int>ans;
        priority_queue<pair<int, int>>pq;
        for(int i=0; i<nums.size(); i++)
        {
            pq.push({nums[i], i});

            if(i>=k-1)
            {
                while(!pq.empty() and pq.top().second <= i-k)
                {
                    pq.pop();
                }
                //cout<<pq.top().first<<endl;
                ans.push_back(pq.top().first);
            }
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {7,2,4};
    obj.maxSlidingWindow(vec,2);
}

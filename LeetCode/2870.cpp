#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minOperations(vector<int>& nums)
    {
        unordered_map<int, int>freq;
        for(auto x:nums)
            freq[x]++;

        int ans = 0;
        for(auto x:freq)
        {
            if(x.second==1)
                return -1;
            else
                ans += ceil((double)x.second/3);
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {19,19,19,19,19,19,19,19,19,19,19,19,19};
    cout<<obj.minOperations(vec);
}


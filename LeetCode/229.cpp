#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        set<int>s;
        vector<int>ans;

        for(auto x:nums)
        {
            mp[x]++;
        }
        for(auto x:mp)
            if(x.second> (nums.size()/3))
                ans.push_back(x.first);

        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,2,2,7,11,15};
    vector<int>a = obj.majorityElement(vec);
    for(auto x:a)
        cout<<x<<" ";
}



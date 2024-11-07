#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int>mp;
        for(auto x:nums)
            mp[x]++;
        int ans=0;
        for(auto x:mp)
        {
            int n = x.second;
            ans+= (n*(n-1))/2;
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,1,1,1};
    cout<<obj.numIdenticalPairs(vec);
}

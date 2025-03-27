#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int deleteAndEarn(vector<int>& nums)
    {
        unordered_map<int, int>mp;
        set<int>s;
        for(auto num:nums)
        {
            mp[num]++;
            s.insert(num);
        }
        vector<int>dp(s.size(),0);
        vector<int>V(s.begin(), s.end());
        sort(V.begin(), V.end());

        for(int i=0; i<V.size(); i++)
        {
            int curVal = V[i]*mp[V[i]];

            if(i>0 and V[i]==V[i-1]+1)
                dp[i] = max(dp[i-1], curVal + (i-2>=0 ? dp[i-2] : 0) );
            else
                dp[i] = curVal + (i-1>=0 ? dp[i-1] : 0);
        }

        return dp[V.size()-1];
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,2,3,3,3,4};
    cout<<obj.deleteAndEarn(vec);
}

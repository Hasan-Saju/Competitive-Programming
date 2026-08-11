#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int>mp;
        for(auto x:nums)
        {
            mp[x]++;
            //cout<<mp[x]<<endl;
            if(mp[x]>1)
                return true;
        }
        return false;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15, 2};
    obj.containsDuplicate(vec);
}


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>result;
        for(int i=0;i<nums.size();i++)
        {
            if(mp[target-nums[i]])
            {
                result.push_back(i);
                result.push_back(mp[target-nums[i]]-1);
                break;
            }
            mp[nums[i]]=i+1;
        }
        for(auto x:result)
            cout<<x<<" ";
        return result;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec,9);
}





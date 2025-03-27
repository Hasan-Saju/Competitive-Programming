#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st1;
        unordered_set<int>intersec;
        vector<int>ans;
        for(auto x:nums1)
            st1.insert(x);
        for(auto x:nums2)
            if(st1.count(x)>0)
                intersec.insert(x);

        for(auto x:intersec)
            ans.push_back(x);

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}

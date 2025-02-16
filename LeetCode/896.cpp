#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = true, dec = true;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i-1]>nums[i] and inc)
                inc = false;
            if(nums[i-1]<nums[i] and dec)
                dec = false;
        }
        if(inc || dec)
            return true;
        else return false;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15, 2};
    cout<<obj.isMonotonic(vec);
}

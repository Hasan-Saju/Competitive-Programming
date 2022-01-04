#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {


    if(nums.size()==0 or nums.size()==1)
        return nums.size();

    int temp = nums[0];
    for (int i=1; i<nums.size(); i++)
    {
        if(nums[i]==temp)
            nums[i]=111;
        else
            temp = nums[i];
    }
    sort(nums.begin(),nums.end());

    int ans=0;
    for(auto x: nums)
    {
        if(x<=100)
            ans++;
        //cout<<x<<"\n";
    }

    return ans;
    }
};

int main()
{
    vector<int>nums = {1,1,2};
    Solution obj;
    obj.removeDuplicates(nums);
}

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int>& nums, int val)
    {
        int i=0;
        int j=nums.size()-1;
        for(i=0; i<nums.size(); i++)
        {
            if(nums[i]!=val)
                continue;
            while(nums[j]==val)
            {
                j--;
                if(j<0)
                    break;
            }
            if(i>=j or i<0)
                break;

            swap(nums[i],nums[j]);
        }
        return i;
        for(auto x:nums)
            cout<<x<<" ";

    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1};
    int val=1;
    obj.removeElement(vec,val);
}


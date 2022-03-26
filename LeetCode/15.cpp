#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int> >result;

        sort(nums.begin(), nums.end());
        if(nums.size()<3)
            return result;

        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0 || (i>0 and nums[i]!=nums[i-1]))
            {
                int low=i+1;
                int high=nums.size()-1;

                int req= -nums[i];

                while(low<high)
                {
                    if(nums[high]+nums[low]==req)
                    {
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        result.push_back(temp);

                        while(low<high and nums[low]==nums[low+1])low++;
                        while(low<high and nums[high]==nums[high-1])high--;

                        low++;
                        high--;
                    }
                    else if(nums[high]+nums[low]<req)low++;
                    else high--;

                }
            }
        }

        return result;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {};
    obj.threeSum(vec);
}





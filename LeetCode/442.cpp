#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        vector<int>result;
        for(int i=0; i<nums.size(); i++)
        {
            int temp=nums[i];
            if(nums[abs(temp)-1]>0)
                nums[abs(temp)-1]= -1*nums[abs(temp)-1];
            else
                result.push_back(abs(temp));
        }

        return result;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {4,3,2,7,8,2,3,1};
    obj.findDuplicates(vec);
}



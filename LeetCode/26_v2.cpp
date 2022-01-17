#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        if(nums.size()==0)
            return 0;
        int ind=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]>nums[ind-1])
            {
                nums[ind]=nums[i];
                ind++;
            }
        }
        cout<<ind;
        return ind;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {0,0,1,1,1,2,2,3,3,4};
    obj.removeDuplicates(vec);
}



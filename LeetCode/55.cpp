#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canJump(vector<int>& nums)
    {

        int mxInd = 0;
        int i=0, j=0;
        if(nums.size()==1)
            return true;

        while(i<nums.size() and j+1<nums.size())
        {
            j = i+1;
            int temp = INT_MIN;
            int maxx = INT_MIN;
            int dec = nums[i]-1;
            if(nums[i]==0 and i!=nums.size()-1)
                return false;

            for(; j<=i+nums[i]; j++)
            {
                if(j==nums.size()-1)
                    return true;
                temp = nums[j] - dec;
                if(temp>maxx and temp>0)
                {
                    maxx = temp;
                    mxInd = j;
                }
                dec--;
            }

            if(maxx<=0)
                return false;
            i = mxInd;
        }
        return true;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,1,0,1};
    cout<<obj.canJump(vec);
}


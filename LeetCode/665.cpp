#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkPossibility(vector<int>& nums)
    {
        int life = 1;
        int sz = nums.size()-1;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i+1]<nums[i])
            {
                if(!life)
                    return false;

                if(i==0 || nums[i-1]<=nums[i+1])
                    nums[i] = i==0 ? nums[i+1]:nums[i-1];
                else
                    nums[i+1] = nums[i];

                life=0;
            }
        }
        return true;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,3,6,2,4};
    cout<<obj.checkPossibility(vec);
}


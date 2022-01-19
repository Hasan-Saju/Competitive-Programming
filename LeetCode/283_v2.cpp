#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        int index=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i])
            {
                swap(nums[i],nums[index]);
                index++;
            }
        }

    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,0,0,0,3,12};
    obj.moveZeroes(vec);
}




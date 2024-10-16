#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canJump(vector<int>& nums)
    {
        int goal = nums.size()-1;
        for(int i = nums.size()-1; i>=0; i--)
            if(i+nums[i]>=goal)
                goal = i;
        return goal == 0? true:false;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,1,0,1};
    cout<<obj.canJump(vec);
}


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int maxx=-1;
        for(int i=nums.size()-1; i>0 ; i--)
        {
            if(nums[i-1]<nums[i])
            {
                int diff = abs(nums[i]-nums[i-1]);
                int portion = diff/2;
                nums[i-1]+=portion;
                nums[i]-=portion;
            }
            maxx = max(maxx, nums[i]);
        }
        maxx = max(maxx, nums[0]);
        return maxx;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {3,7,1,6};
    cout<<obj.minimizeArrayValue(vec);
}


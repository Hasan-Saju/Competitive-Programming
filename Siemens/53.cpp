#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int fsum = INT_MIN;
        int tsum = 0;

        for(int i=0; i<nums.size(); i++)
        {
            tsum+=nums[i];
            fsum = max(fsum,tsum);
            if(tsum<0)
                tsum = 0;
        }
        return fsum;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<obj.maxSubArray(vec);
}

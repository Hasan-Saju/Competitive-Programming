#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ind=0;
        int n = nums.size();

        while(ind<n)
        {
            if(nums[ind]>=1 and nums[ind]<=n and nums[ind] != nums[nums[ind]-1])
                swap(nums[ind], nums[nums[ind]-1]);
            else
                ind++;
        }

        for(int i=0; i<n; i++)
        {
            if(nums[i]!=i+1)
                return i+1;
        }

        return n+1;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.firstMissingPositive(vec);
}


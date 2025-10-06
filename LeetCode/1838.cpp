#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxFrequency(vector<int>& nums, int k)
    {
        long long left=0, right=0, total=0;
        long long ans=INT_MIN;
        sort(nums.begin(), nums.end());
        total = nums[right];
        while(right<nums.size())
        {
            //cout<<total<<" total\n";
            if((long long)nums[right]*(right-left+1)<=(long long)total+k)
            {
                ans=max(ans, right-left+1);
                right++;
                //cout<<" if \n";
                if(right<nums.size())
                    total+=nums[right];
            }
            else
            {
                total-=nums[left];
                left++;
                //cout<<total<<" else \n";
            }
        }
        cout<<ans<<endl;
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,4};
    cout<<obj.maxFrequency(vec, 5);
}


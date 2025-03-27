#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:

    long long zeroFilledSubarray(vector<int>& nums)
    {
        int kount = 0;
        map<int, int>freq;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
            {
                kount++;
            }
            else
            {
                if(kount)
                    freq[kount]++;
                kount=0;
            }
        }
        if(kount)
            freq[kount]++;

        for(auto x:freq)
            cout<<x.first<<" "<<x.second<<"\n";

        long long ans = 0;
        for(auto x:freq)
        {
            long long temp = ((long long)x.first * (x.first+1))/2;
            temp = x.second*temp;
            ans+=temp;
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,3,0,0,2,0,0,0,4};
    cout<<obj.zeroFilledSubarray(vec);
}

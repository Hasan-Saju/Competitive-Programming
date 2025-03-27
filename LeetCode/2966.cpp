#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k)
    {
        vector<vector<int>>temp;
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans(nums.size()/3);

        int first=nums[0];
        int j=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]-first<=k and ans[j].size()<=2)
                ans[j].push_back(nums[i]);
            else
            {
                first = nums[i];
                j++;
                if(j>=(nums.size()/3))
                    return temp;
                ans[j].push_back(nums[i]);
            }
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {4,2,9,8,2,12,7,12,10,5,8,5,5,7,9,2,5,11};
    vector<vector<int>> r = obj.divideArray(vec,14);
    for(auto x:r)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }

        cout<<"\n";
    }

}

//2 2 2 4 5 5 5 5 7 7 8 8 9 9 10 11 12 12


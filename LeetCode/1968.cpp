#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> rearrangeArray(vector<int>& nums)
    {
        vector<int>ans;
        int i=0, j=nums.size()-1;
        sort(nums.begin(), nums.end());
        while(i<j)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j--;
        }
        if(i==j)
            ans.push_back(nums[i]);

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,4,5};
    vector<int>a = obj.rearrangeArray(vec);

    for(auto x:a)
        cout<<x<<" ";
}

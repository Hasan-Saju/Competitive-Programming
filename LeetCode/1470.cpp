#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> shuffle(vector<int>& nums, int n)
    {
        int i,j;
        vector<int>result;
        for(i=0,j=n; i<n,j<2*n; i++,j++)
        {
            result.push_back(nums[i]);
            result.push_back(nums[j]);
        }
        return result;

    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,4,4,3,2,1};
    obj.shuffle(vec,4);
}






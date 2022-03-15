#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        int i=0,j=nums.size()-1;
        deque<int>d;
        vector<int>ans;

        for(;i<j;)
        {
            if( abs(nums[i])>=abs(nums[j]) )
            {
                d.push_front(nums[i]*nums[i]);
                i++;
            }
            else
            {
                d.push_front(nums[j]*nums[j]);
                j--;
            }
        }
        for(auto x:d)
            ans.push_back(x);
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}



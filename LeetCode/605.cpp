#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void hell()
    {
        cout<<"Bangladesh";
    }
    vector<int> twoSum(vector<int>& nums)
    {
        for(int i=0; i<nums.size(); i++)
        {
            cout<<nums[i]<<"\n";
        }
        hell();
        return nums;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}


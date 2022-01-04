#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int>& nums)
    {
        int left=0;
        int right=nums.size()-1;
        int i=0;

        while(i<=right)
        {
            cout<<left<<" "<<right<<"\n";
            if(nums[i]==0)
            {
                swap(nums[left],nums[i]);
                left++;
            }
            else if(nums[i]==2)
            {
                swap(nums[right], nums[i]);
                right--;
                continue;
            }
            i++;
        }

        for(auto x: nums)
        cout<<x<<" ";
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,0,2,1,1,0};
    obj.sortColors(vec);
}




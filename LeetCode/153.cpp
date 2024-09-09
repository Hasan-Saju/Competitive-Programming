#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMin(vector<int>& nums)
    {
        int left = 0;
        int right = nums.size()-1;

        while(left<right)
        {
            cout<<left<<" "<<right<<"\n";

            int mid = left + (right-left)/2 ;

            if(nums[mid]> nums[right])
                left = mid + 1;
            else
                right = mid;
        }

        return nums[left];

    }
};


int main()
{
    Solution obj;
    vector<int>vec = {3, 1, 2};
    int ans = obj.findMin(vec);
    cout<<ans;
}


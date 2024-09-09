#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int searchh(vector<int>& nums, int target)
    {
        int left = 0;
        int right = nums.size()-1;

        while(left<right)
        {
            int mid = left + (right-left)/2 ;
            cout<<left<<" "<<right<<" "<<mid<<"s\n";

            if( (nums[right] > nums[mid]))
            {
                if(( target > nums[mid] && target <= nums[right]))
                    left = mid + 1;
                else
                    right = mid;

            }
            else
            {
               if(( target >= nums[left] && target <= nums[mid]))
                    right = mid;
                else
                    left = mid + 1;
            }

            cout<<left<<" "<<right<<" "<<mid<<"e\n";
        }
        if(left == right and nums[left]==target)
            return left;
        else
            return -1;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {3, 1};
    cout<<obj.searchh(vec, 3);
}


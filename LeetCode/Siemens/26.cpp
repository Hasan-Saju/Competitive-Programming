#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int insertIndex=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[insertIndex] = nums[i];
                insertIndex++;
            }
        }

        return insertIndex;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,1,2,2};
    cout<<obj.removeDuplicates(vec);
}


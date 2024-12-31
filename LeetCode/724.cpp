#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0, leftSum = 0;

        for (int num : nums) {
            total += num;
        }

        for (int i = 0; i < nums.size(); ++i) {
            int rightSum = total - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i;
            }
            leftSum += nums[i];
        }

        return -1;
    }
};



int main()
{
    Solution obj;
    vector<int>vec = {-1,-1,-1,-1,-1,0};
    vector<int>vec2 = {2,1,-1};
    cout<<obj.pivotIndex(vec);
}

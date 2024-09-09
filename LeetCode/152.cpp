#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxVal = 1;
        int minVal = 1;
        int result = INT_MIN;
        for (int num : nums)
        {
            if (num > result)
            {
                result = num;
            }
        }

        for(int i=0; i<nums.size(); i++)
        {
            int x = nums[i];
            if(x==0)
            {
                maxVal = 1;
                minVal = 1;
                continue;
            }
            int temp= maxVal;
            maxVal = max(x*maxVal, max(x*minVal, x));
            minVal = min(x*temp, min(x*minVal, x));

            //cout<<maxVal<<" "<<minVal<<"\n";

            result = max(result, maxVal);
        }
        return result;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {7,-2,-4};
    cout<<obj.maxProduct(vec);
}


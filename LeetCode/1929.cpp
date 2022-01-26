#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           nums.push_back(nums[i]);
        }
        return nums;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,3,2,1};
    obj.getConcatenation(vec);
}






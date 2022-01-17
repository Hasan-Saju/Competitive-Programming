#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int>& nums, int k)
    {
        k = k - (k/nums.size())*nums.size();

        reverse(nums.begin(),nums.end()-k);
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1};
    obj.rotate(vec,2);
}

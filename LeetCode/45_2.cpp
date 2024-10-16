#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int jump(vector<int>& nums)
    {
      int l=0, r=0, result = 0;
      while(r<nums.size())
      {
         int farthest = 0;
         for(int i=l; i<=r; i++)
              farthest = max(farthest, i+nums[i]);
        l = r+1;
        r = farthest;
        result++;
      }
      return result-1;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,3,1,1,4};
    cout<<obj.jump(vec);
}



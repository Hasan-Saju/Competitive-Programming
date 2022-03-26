#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int>& nums)
    {
        set<int>s;
        int siz=nums.size();
        if(siz==0)
            return 0;
        for(int i=0; i<siz; i++)
        {
            s.insert(nums[i]);
        }
        int cons=1;
        int first=0;
        int prev=0;
        int result=0;

        for(auto x:s)
        {
            if(!first)
            {
                first=1;
                prev=x;
                continue;
            }
            if(abs(x-prev)==1)
            {
                cons++;
            }
            else
            {
                result=max(result,cons);
                cons=1;
            }
            prev=x;
        }
        result=max(result,cons);
        return result;

    }

};

int main()
{
    Solution obj;
    vector<int>vec = {0,3,7,2,5,8,4,6,0,1};
    cout<<obj.longestConsecutive(vec);
}



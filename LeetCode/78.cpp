#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>> ans;
        int n;
        n=nums.size();
        int total = 1<<n;

        for(int i=0; i<total; i++)
        {
            vector<int>temp;
            for(int j=0; j<n; j++)
            {

                int mask = 1<<j;
                if((i&mask)!=0)
                {
                    temp.push_back(nums[j]);
                }
            }
            ans.push_back(temp);
        }
        for(auto x:ans)
        {
            for(auto y:x)
            {
                cout<<y<<" ";
            }
            cout<<"\n";
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,2,3};
    obj.subsets(vec);
}


#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        int siz= nums.size();
        vector<int>ans(siz,1);

        for(int i=0; i<siz; i++)
        {
            ans[nums[i]-1] = 0;
        }

        int start =0;
        vector<int>::iterator st,fin;
        st=ans.begin();
        fin=ans.end();

        for(int i=0; i<siz; i++)
        {
            if(ans[i])
            {
                ans[start]=i+1;
                start++;
                st++;
            }

        }

        ans.erase(st,fin);

        for(auto x: ans)
            cout<<x<<" ";
        return ans;

    }
};

int main()
{
    Solution obj;
    vector<int>vec = {4,3,2,7,8,2,3,1};
    obj.findDisappearedNumbers(vec);
}



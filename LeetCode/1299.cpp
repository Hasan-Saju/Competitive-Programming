#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> replaceElements(vector<int>& arr)
    {
        int mx=0;
        vector<int>ans;
        for(int i=arr.size()-1; i>=0; i--)
        {
            if(mx==0)
                ans.push_back(-1);
            else
                ans.push_back(mx);

            mx = max(mx, arr[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}


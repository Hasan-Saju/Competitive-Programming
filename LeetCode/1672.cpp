#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res=INT_MIN;
        for(auto row:accounts)
        {
            int temp=0;
            for(auto ele:row)
            {
                temp+=ele;
            }
            res = max(res, temp);
        }
        return res;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int siz=nums.size();
        vector<int>result(siz,1);
        int ans=-5;

        for(int i=0;i<siz;i++)
        {
            result[nums[i]-1]--;
            if(result[nums[i]-1]<0)
            {
                ans=nums[i];
                break;
            }
        }
        cout<<ans;
        return ans;

    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,3,4,2,2};
    int ans=obj.findDuplicate(vec);
//    cout<<ans;
}







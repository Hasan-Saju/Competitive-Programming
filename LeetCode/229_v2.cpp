#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        int ele1=-1,ele2=-1;
        int kount1=0,kount2=0;
        vector<int>ans;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==ele1)
                kount1++;
            else if(nums[i]==ele2)
                kount2++;
            else if(kount1==0)
            {
                ele1=nums[i];
                kount1=1;
            }
            else if(kount2==0)
            {
                ele2=nums[i];
                kount2=1;
            }
            else
            {
                kount1--;
                kount2--;
            }
        }
        kount1=0;
        kount2=0;

        for(auto x:nums)
        {
            if(ele1==x)
                kount1++;
            else if(ele2==x)
                kount2++;
        }
        cout<<ele1<<" "<<ele2;
        if(kount1>nums.size()/3)
            ans.push_back(ele1);
        if(kount2>nums.size()/3)
            ans.push_back(ele2);

        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,1,1,3,1,4,5,6};
    vector<int>a = obj.majorityElement(vec);
    for(auto x:a)
        cout<<x<<" ";
}




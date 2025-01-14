#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static bool cmpFunc(const string& a, const string& b)
    {
        if(a.size()<b.size())
            return false;
        else if(b.size()<a.size())
            return true;
        else
        {
            for(int i=0; i<a.size(); i++)
            {
                if(a[i]<b[i])
                    return false;
                else if(b[i]<a[i])
                    return true;
            }
        }
        return false;
    }
    string kthLargestNumber(vector<string>& nums, int k)
    {
        sort(nums.begin(), nums.end(), cmpFunc);
        string ans;
        for(int i=0; i<nums.size(); i++)
            if(i==k-1)
            {
                ans = nums[i];
                break;
            }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<string>vec = {"2","21","12","1"};
    cout<<obj.kthLargestNumber(vec,3);
}


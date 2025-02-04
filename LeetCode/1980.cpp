#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string recursion(string s, int ind, unordered_set<string>& st)
    {
        if(st.find(s)==st.end())
            return s;
        if(ind>=s.size())
            return "";

        string change = s;
        change[ind] = '1';
        string res =  recursion(change, ind+1, st);
        if(res.size())
            return res;

        change[ind] = '0';
        return recursion(change, ind+1, st);
    }
    string findDifferentBinaryString(vector<string>& nums)
    {
        unordered_set<string>st;
        for(auto x:nums)
            st.insert(x);

        string str(nums[0].size(), '0');
        return recursion(str, 0, st);
    }
};

int main()
{
    Solution obj;
    vector<string>vec = {"01", "10"};
    cout<<obj.findDifferentBinaryString(vec);
}

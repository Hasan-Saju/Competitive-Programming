#include<bits/stdc++.h>
using namespace std;
class Solution
{

public:
    static bool customCmp(const string &a, const string &b)
    {
        return a+b > b+a;
    }
    string largestNumber(vector<int>& nums)
    {
        vector<string>n;
        for(auto x:nums)
            n.push_back(to_string(x));

        sort(n.begin(), n.end(), customCmp);
        string ans="";
        for(auto x:n)
            ans+=x;

       return ans[0]=='0' ? "0":ans;
    }

};
int main()
{
    Solution obj;
    vector<int>vec = {3,30,34,5,9};
    //vector<int>vec = {9, 92};
    obj.largestNumber(vec);
}

//9 5 34 30 3 3

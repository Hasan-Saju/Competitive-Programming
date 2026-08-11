#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> ans;
    void backtrack(int open, int close, string s, int n)
    {
        if(open==close and open==n)
        {
            ans.push_back(s);
            return;
        }

        if(open<n)
        {
            s+="(";
            backtrack(open+1, close, s, n);
            s.pop_back();
        }
        if(close<open)
        {
            s+=")";
            backtrack(open, close+1, s, n);
            s.pop_back();
        }

    }
    vector<string> generateParenthesis(int n)
    {
        backtrack(0,0,"", n);
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.generateParenthesis(3);
}


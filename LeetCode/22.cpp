#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> result;

    void backtrack(int open, int close, int n, string s)
    {
        if(open==close and open == n)
        {
            cout<<s<<"\n";
            result.push_back(s);
            return;
        }
        if(open<n)
        {
            s += "(";
            backtrack(open+1, close, n, s);
            s.pop_back();
        }
        if(close<open)
        {
            s += ")";
            backtrack(open, close+1, n, s);
            s.pop_back();
        }
    }

    vector<string> generateParenthesis(int n)
    {
        backtrack(0, 0, n, "");
        return result;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.generateParenthesis(3);
}



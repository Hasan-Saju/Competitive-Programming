#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool recursion(const string& s, const string& t, int i, int j)
    {
        cout<<i<<" "<<j<<"\n";
        if(i==s.size())
            return true;
        if(j==t.size())
            return false;
        if(s[i]==t[j])
            return recursion(s, t, i+1, j+1);

        return recursion(s, t, i, j+1);
    }
    bool isSubsequence(string s, string t) {
        return recursion(s, t, 0, 0);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    string s = "abc";
    string t = "ahbgdc";
    cout<<obj.isSubsequence(s,t);
}


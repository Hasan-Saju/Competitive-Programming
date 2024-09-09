#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int minimumPushes(string word)
    {
        vector<int>alpha(26);
        for(auto x:word )
        {
            alpha[x - 'a']++;
        }
        sort(alpha.rbegin(), alpha.rend());

        int push = 0;
        int index = 0;
        int keypress=1;
        for(auto x:alpha)
        {
            push += x * (keypress + index/8);
            index ++;
        }

        return push;

    }
};

int main()
{
    Solution obj;
    string w = "xyzxyzxyzxyz";
    cout<<obj.minimumPushes(w);
}


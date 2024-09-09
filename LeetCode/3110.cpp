#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        for(int i=0; i<s.size()-1; i++)
        {
            ans += abs(s[i]-s[i+1]);
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.scoreOfString("zaz");
}


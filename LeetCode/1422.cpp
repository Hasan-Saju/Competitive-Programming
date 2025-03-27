#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxScore(string s)
    {
        int zero=0, one=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
                one++;
        }
        int ans = INT_MIN;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else if(s[i]=='1')
            {
                one--;
            }
            ans = max(ans, zero+one);
            //cout<<zero<<" "<<one<<" "<<ans<<endl;
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.maxScore("011101");
}


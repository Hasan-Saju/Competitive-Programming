#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countSubstrings(string s)
    {
        int l,r;
        int kount=0;
        for(int i=0; i<s.size(); i++)
        {
            l=i;
            r=i;

            while(l>=0 and r<s.size() and s[l]==s[r])
            {
                kount++;
                l--;
                r++;
            }

            l=i;
            r=i+1;

            while(l>=0 and r<s.size() and s[l]==s[r])
            {
                kount++;
                l--;
                r++;
            }
        }
        return kount;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.countSubstrings("abc");
}


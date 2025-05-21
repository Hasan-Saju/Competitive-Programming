#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string licenseKeyFormatting(string s, int k)
    {
        int kount=k;
        string res = "";
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]=='-')
                continue;
            char c = s[i];
            if(c>='a' and c<='z')
                c = (c - 32);
            res += c;
            kount--;
            if(kount==0 and i!=0)
            {
                res+='-';
                kount=k;
            }
        }

        reverse(res.begin(), res.end());
        return res;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    string s = "5F3Z-2e-9-w";

    cout<<obj.licenseKeyFormatting(s, 4);
}


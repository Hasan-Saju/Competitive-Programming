#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {

        int longest = 0;
        int start = 0;
        int endd = 0 ;
        int l,r;
        for(int i=0; i<s.size(); i++)
        {
            //odd
            l =i;
            r = i;
            while(l>=0 and r<s.size() and s[l]==s[r])
            {
                int len = r-l+1;
                if(len>longest)
                {
                    longest = len;
                    start = l;
                    endd = r;
                }
                l--, r++;
            }

            //even
            l = i;
            r = i+1;
            while(l>=0 and r<s.size() and s[l]==s[r])
            {
                int len = r-l+1;
                if(len>longest)
                {
                    longest = len;
                    start = l;
                    endd = r;
                }
                l--, r++;
            }
        }

        return s.substr(start, endd-start+1);

    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.longestPalindrome("cbbd");
}


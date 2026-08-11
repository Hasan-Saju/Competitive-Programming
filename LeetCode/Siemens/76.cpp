#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string minWindow(string s, string t)
    {
        if(t.size()==0)
            return "";

        unordered_map<char, int>kount;
        for(int i=0; i<t.size(); i++)
        {
            kount[t[i]]++;
        }

        pair<int, int>final_index;
        int ansLen= INT_MAX;
        unordered_map<char, int>window;
        int have = kount.size();
        int match =0;
        int l=0;

        for(int r=0; r<s.size(); r++)
        {
            char ch = s[r];
            window[ch]++;

            if(kount.count(ch) and kount[ch] == window[ch])
                match++;

            while(match==have)
            {
                if(r-l+1<ansLen)
                {
                    ansLen = r-l+1;
                    final_index = {l,r};
                }

                window[s[l]]--;
                if(kount.count(s[l]) and kount[s[l]]>window[s[l]])
                    match--;
                l++;
            }
        }

        return ansLen==INT_MAX ? "":s.substr(final_index.first, ansLen);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.minWindow("ADOBECODEBANC", "ABC");
}


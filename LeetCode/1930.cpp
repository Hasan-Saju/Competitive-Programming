#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countPalindromicSubsequence(string s)
    {
        vector<int>cha(26,0);
        unordered_set<char>left;
        unordered_set<string>ans;

        for(auto c: s)
            cha[c-'a']++;

        for(int i=0; i<s.size(); i++)
        {
            cha[s[i]-'a']--;
            for(int j=0; j<26; j++)
            {
                char c = 'a'+j;
                if(left.count(c) and cha[j]>0)
                    ans.insert(string(1, c) + s[i] + c);
            }
            left.insert(s[i]);
        }
        return ans.size();
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.countPalindromicSubsequence("aabca");
}


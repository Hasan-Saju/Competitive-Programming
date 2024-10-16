#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        if(s2.size() < s1.size())
            return false;

        vector<int>s1Count(26, 0);
        vector<int>s2Count(26, 0);

        for(int i=0; i<s1.size(); i++)
        {
            s1Count[s1[i]-'a']++;
            s2Count[s2[i]-'a']++;
        }


        int match=0;
        for(int i=0; i<26; i++)
            if(s1Count[i]==s2Count[i])
                match++;

        int sz = s1.size();
        for(int i=1; i+sz <= s2.size(); i++)
        {
            if(match==26)
                return true;

            int prev = s2[i-1]-'a';
            int last = s2[i+sz-1]-'a';

            s2Count[prev]--;
            if(s2Count[prev] == s1Count[prev])
                match++;
            else if(s2Count[prev] + 1 == s1Count[prev])
                match--;

            s2Count[last]++;
            if(s2Count[last] == s1Count[last])
                match++;
            else if(s2Count[last] - 1 == s1Count[last])
                match--;

        }

        return match == 26;


    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.checkInclusion("trinitrophenylmethylnitramine", "dinitrophenylhydrazinetrinitrophenylmethylnitramine");
}


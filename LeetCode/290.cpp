#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        unordered_map<char, string>mp;
        unordered_set<string>st;
        vector<string>words;
        istringstream iss(s);
        string word;

        while(iss>>word)
            words.push_back(word);
        if(pattern.size()!=words.size())
            return false;
        for(int i=0; i<pattern.size(); i++)
        {
            char c = pattern[i];
            if(mp.find(c)==mp.end() and !st.count(words[i]))
            {
                mp[c] = words[i];
                st.insert(words[i]);
            }
            else if(mp[c]!=words[i])
                return false;
        }

        return true;
    }
};
int main()
{
    Solution obj;
    //vector<int>vec = {2,7,11,15};
    cout<<obj.wordPattern("abba", "dog cat cat dog");
}


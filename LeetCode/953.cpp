#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isAlienSorted(vector<string>& words, string order)
    {
        vector<int>serial(26, 0);
        for(int i=0; i<26; i++)
            serial[order[i]-'a'] = i;

        auto cmp =[&](const string& a, const string& b)
        {
            for(int i=0, j=0; i<a.size() and j<b.size(); i++, j++)
                if(a[i]!=b[j])
                    return serial[a[i]-'a']<= serial[b[j]-'a'];
            return a.size()<=b.size();
        };

        vector<string>copyWord = words;
        sort(copyWord.begin(), copyWord.end(), cmp);

        for(auto x: words)
            cout<<x<<" "<<"\n";

        return copyWord == words;

    }
};
int main()
{
    Solution obj;
    vector<string>words = {"hello","leetcode"};
    string order = "hlabcdefgijkmnopqrstuvwxyz";
    cout<<obj.isAlienSorted(words, order);
}

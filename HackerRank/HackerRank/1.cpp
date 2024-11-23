#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minLength(string given, string target)
    {
        map<char, int>mp;
        for(auto c:target)
            mp[c-'0']++;

        int match = 0;

        for(int i=0; i<given.size(); i++)
        {
            if(mp[given[i]-'0']>0)
            {
                mp[given[i]-'0']--;
                match++;
            }
            if(match==target.size())
                return i+1;
        }
        return -1;
    }
    vector<int> countMinimumCharacters(string s, vector<string>& arr)
    {
        vector<int>result;
        for(auto eachString:arr)
            result.push_back(minLength(s, eachString));
        return result;
    }
};
int main()
{
    Solution obj;
    vector<string>vec = {"088", "364", "07"};
    vector<int>ans =  obj.countMinimumCharacters("064819848398", vec);
    for(auto x: ans)
        cout<<x<<" ";
}

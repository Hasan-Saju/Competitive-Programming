#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        vector<vector<string>> result;
        map<string, vector<string>> mp;

        for(auto x:strs )
        {
            string temp=x;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(x);
        }


        for(auto x:mp)
        {
            vector<string>temp;
            temp = x.second;

            result.push_back(temp);
        }

        return result;

    }
};
int main()
{
    Solution obj;
    vector<string>vec = {"eat","tea","tan","ate","nat"};
    obj.groupAnagrams(vec);
}



#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>>mp;
        for(auto x: strs)
        {
            string s = x;
            sort(s.begin(), s.end());
            mp[s].push_back(x);
        }

        vector<vector<string>>ans;
        for(auto ele:mp)
        {
            ans.push_back(ele.second);
        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<string>vec = {"eat","tea","tan","ate","nat","bat"};
    //vector<string>vec = {"eat","tea","tan","ate","nat","bat"};
    obj.groupAnagrams(vec);
}


#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string destCity(vector<vector<string>>& paths)
    {
        unordered_map<string, int>src;
        unordered_map<string, int>dst;
        set<string>allCity;
        string ans;

        for(auto path: paths)
        {
            src[path[0]]++;
            dst[path[1]]++;
            allCity.insert(path[0]);
            allCity.insert(path[1]);
        }

        for(auto city:allCity)
        {
            if(src.find(city)==src.end() and dst.count(city)>0)
            {
                ans = city;
                break;
            }
        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<string>>vec = {{"London","New York"},{"New York","Lima"},{"Lima","Sao Paulo"}};
    cout<<obj.destCity(vec);
}


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>result;
        string temp;
        sort(p.begin(), p.end());
        for(int i=0; i<s.size(); i++)
        {
            temp = s.substr(i, p.size());
            sort(temp.begin(), temp.end());
            if(temp==p)
                result.push_back(i);
        }
        return result;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}

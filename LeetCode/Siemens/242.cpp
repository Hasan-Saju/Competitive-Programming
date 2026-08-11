#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
       return s==t;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.isAnagram("hasan", "nasah");
}

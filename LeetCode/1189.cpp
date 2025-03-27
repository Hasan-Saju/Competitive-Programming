#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int>mp;
        set<char>s;
        s.insert('b');
        s.insert('a');
        s.insert('l');
        s.insert('o');
        s.insert('n');

        mp['b'] = 0;
        mp['a'] = 0;
        mp['l'] = 0;
        mp['o'] = 0;
        mp['n'] = 0;
        for(auto c:text)
        {
            if(s.count(c))
                mp[c]++;
        }

        int ans=INT_MAX;
        mp['l']/=2;
        mp['o']/=2;
        for(auto x:mp)
        {
            ans = min(x.second, ans);
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    //vector<int>vec = {2,7,11,15};
    cout<<obj.maxNumberOfBalloons("leetcode");
}

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>alp(26,0);
        for(auto x:ransomNote)
            alp[x-'a']++;
        for(auto x:magazine)
            alp[x-'a'] = max(0, alp[x-'a']-1) ;

        for(auto x:alp)
            if(x)
                return false;

        return true;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.canConstruct("aa","ab");
}

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>alp(26,0);
        char ans;
        for(auto c:t)
            alp[c-'a']++;
        for(auto c:s)
            alp[c-'a']--;
        for(int i=0; i<26; i++)
        {
            if(alp[i]>0)
            {
                ans = 'a'+i;
                break;
            }
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.findTheDifference("abcd", "abcde");
}

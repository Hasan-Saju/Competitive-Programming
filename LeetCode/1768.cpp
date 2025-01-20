#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        for(int i=0; i<max(word1.size(), word2.size()); i++)
        {
            if(i<word1.size())
                ans+=word1[i];
            if(i<word2.size())
                ans+=word2[i];
        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.mergeAlternately("c", "pqrst");
}


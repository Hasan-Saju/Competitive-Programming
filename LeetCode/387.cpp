#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        map<char,int>mp;
        for(auto ch:s )
            mp[ch]++;

        bool ans=false;
        int result=0;
        for(auto x:s )
        {
            if(mp[x]==1)
            {
                ans=true;
                break;
            }

            result++;
        }
        if(!ans)result=-1;
        return result;
    }
};

int main()
{
    Solution obj;
    vector<char>vec = {'h','e','l','o','h'};
    obj.firstUniqChar("hellohe");
}




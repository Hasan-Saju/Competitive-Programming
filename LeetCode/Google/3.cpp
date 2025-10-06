#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:

    int lengthOfLongestSubstring(string s)
    {

        int left=0;
        int mx=0;

        map<char, int>mp;
        int ind=0;
        for(int i=0; i<s.size(); i++)
        {
            if(!mp[s[i]])
            {
                cout<<s[i]<<endl;
                mp[s[i]]=ind;
                ind++;
            }
        }

        vector<int>ch(mp.size()+1,0);
        int i=0;
        for(; i<s.size(); i++)
        {
            int index = mp[s[i]];
            ch[index]++;

            while(ch[index]>1 and left<=i)
            {
                mx = max(i-left, mx);
                cout<<mx<<" "<<i<<" "<<left<<endl;
                int in = mp[s[left]];
                ch[in]--;
                left++;
            }
        }
        mx = max(i-left, mx);

        return mx;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.lengthOfLongestSubstring(" ");
}


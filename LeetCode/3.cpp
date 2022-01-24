#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int result = 0;
        int left=0;
        int right=0;
        vector<int>v(128,-1);


        while(right<s.size())
        {
            char ch = s[right];
            int index = v[ch];

            if(index!=-1 and index>=left and index<right)
            {
                left = index+1;
            }
            //cout<<right<<" "<<left<<"\n";
            result=max(result,right-left+1);
            //cout<<result<<"\n";
            v[ch]=right;
            right++;
        }
        return result;
    }
};

int main()
{
    Solution obj;
    string s="bbbb";
    int ans = obj.lengthOfLongestSubstring(s);
    cout<<ans;
}



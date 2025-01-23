#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='a' and s[i]<='z')
                st.push(s[i]);
            else
                st.pop();
        }

        string ans;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
    Solution obj;
    string s ="leet**cod*e";
    cout<<obj.removeStars(s);
}


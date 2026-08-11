#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int ans=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==')')
            {
                if(!st.empty())
                    st.pop();
                else
                    ans++;

                continue;
            }
            st.push(s[i]);
        }

        return st.size()+ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}


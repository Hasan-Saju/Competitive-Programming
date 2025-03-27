#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeDuplicates(string s, int k)
    {
        stack<pair<char, int>>st;
        for(int i=0; i<s.size(); i++)
        {
            if(!st.empty())
            {
                auto tp = st.top();
                int val = 1;

                if(s[i]==tp.first)
                    val = tp.second+1;
                st.push({s[i], val});

                if(val==k)
                {
                    int temp=k;
                    while(temp--)
                    {
                        st.pop();
                    }
                }
            }
            else
                st.push({s[i], 1});
        }

        string ans = "";
        while(!st.empty())
        {
            ans+=st.top().first;
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.removeDuplicates("pbbcggttciiippooaais",2);
}


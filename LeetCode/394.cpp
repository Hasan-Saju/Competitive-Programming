#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string decodeString(string s)
    {
        string ans="";
        stack<char>st;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=']')
                st.push(s[i]);
            else
            {
                string temp = "";
                string tempstack="";
                while(!st.empty() and st.top()!='[')
                {
                    temp+=st.top();
                    st.pop();

                    cout<<temp<<" tmp\n";
                }
                st.pop();
                reverse(temp.begin(), temp.end());
                cout<<temp<<" temp st\n";

                string num="";
                while(!st.empty() and st.top()>='0' and st.top()<='9')
                {
                    num+=st.top();
                    st.pop();

                    cout<<num<<" num\n";
                }

                reverse(num.begin(), num.end());
                int times = stoi(num);
                cout<<times<<" times\n";

                for(int j=0; j<times; j++)
                    tempstack+=temp;

                for(int k=0; k<tempstack.size(); k++)
                    st.push(tempstack[k]);

                cout<<ans<<" ans\n";
            }
        }

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
    vector<int>vec = {2,7,11,15};
    cout<<obj.decodeString("3[a2[c]]");
}

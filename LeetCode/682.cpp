#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int convert(string s)
    {
        int ans;
        if(s[0]!='-')
            ans = stoi(s);
        else
            ans = -1 * stoi(s.substr(1,s.size()-1));

        return ans;
    }
    int calPoints(vector<string>& operations)
    {
        stack<int>st;
        for(int i=0; i<operations.size(); i++)
        {
            if(operations[i]=="+")
            {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.push(x);
                st.push(x+y);
            }
            else if(operations[i]=="C")
                st.pop();
            else if(operations[i]=="D")
                st.push(2*st.top());
            else
                st.push(convert(operations[i]));
        }
        int ans=0;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<string>vec = {"5","-2","4","C","D","9","+","+"};
    cout<<obj.calPoints(vec);
}

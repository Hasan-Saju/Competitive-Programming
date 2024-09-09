#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char>st;
        for(char x:s )
        {
            if(!st.empty())
            {
                char last = st.top();
                if(isPair(last, x))
                {
                    st.pop();
                    continue;
                }
            }
            st.push(x);
        }
        return st.empty();
    }
private:
    bool isPair(char one, char two)
    {
        return (one == '(' && two == ')') ||
               (one == '{' && two == '}') ||
               (one == '[' && two == ']');
    }
};

int main()
{
    Solution obj;
    string s="(])";
    cout<<obj.isValid(s);
}


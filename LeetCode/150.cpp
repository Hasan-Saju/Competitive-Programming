#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string>& tokens)
    {
        stack<int>st;
        int result = stoi(tokens[0]);
        for(int i=0; i<tokens.size(); i++)
        {
            if(tokens[i]=="+" or tokens[i]=="-" or tokens[i]=="*" or tokens[i]=="/")
            {
                int y = st.top();
                st.pop();
                int x = st.top();
                st.pop();

                if(tokens[i]=="+")
                    result = (x+y);
                else if(tokens[i]=="-")
                    result = (x-y);
                else if(tokens[i]=="*")
                    result = (x*y);
                else if(tokens[i]=="/")
                    result = (x/y);

                st.push(result);
            }
            else
                st.push(stoi(tokens[i]));

        }
        return result;
    }
};

int main()
{
    Solution obj;
    vector<string>vec = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    cout<<obj.evalRPN(vec);
}


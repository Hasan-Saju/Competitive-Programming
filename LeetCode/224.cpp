#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int calculate(string s)
    {
        stack<char>st;
        int ans=0;
        int num=0;

        for(int i=0; i<s.size(); i++)
        {
            cout<<s[i]<<" ";
            if(s[i]==' ')
                continue;

            if( !st.empty() and st.top()==')' )
            {
                while(st.top()!='(')
                {
                    if(st.top()=='+')
                        st.pop();
                    else if(st.top()=='-')
                    {
                        ans=ans-(2*num);
                        cout<<ans<<"\n";
                    }

                    num=s[i]-'0';
                    ans+=num;
                }
                st.pop();
            }

            st.push(s[i]);


        }


        return ans;
    }
};

int main()
{
    Solution obj;
    //vector<int>vec = {2,7,11,15};
    string s="(1+(4+5+2)-3)+(6+8)";
    obj.calculate(s);
}






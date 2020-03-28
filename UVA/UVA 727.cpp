#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)

int prio(char c)
{
    switch(c)
    {
    case '(':
        return 1; //break;
    case '+':
        return 2; //break;
    case '-':
        return 2; //break;
    case '*':
        return 3; //break;
    case '/':
        return 3; //
        break;
    }


}
int main()
{
    int n=0,countt=0;
    // char sp=' ';

    cin >> n;
    cin.ignore();
    cin.ignore();

    while(n--)
    {
        string ans="";
        string str;

        stack<char>st;

        while(true)
        {

            getline(cin, str);

            char c = str[0];
            if (str.size() == 0 || !cin)
                break;

            if(c=='(')
                st.push(c);
            else if(c>='0'&&c<='9')
                ans+=c;
            else if(c=='+'||c=='-'||c=='*'||c=='/')
            {
                while(!st.empty()&&prio(c)<=prio(st.top()))
                {
                    ans+=st.top();
                    st.pop();
                }
                st.push(c);
            }
            else if(c==')')
            {
                while(st.top()!='(')
                {
                    ans+=st.top();
                    st.pop();
                }
                st.pop();
            }
        }

        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }




        cout<<ans<<endl;
        if(n)
            cout<<endl;


    }
}


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
int main()
{
    int n,i,flag=0;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        stack<char>f,t;
        flag=0;
        string s;
        getline(cin,s);
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
                f.push(s[i]);
            else if(s[i]=='[')
                f.push(s[i]);
            else if(s[i]==')')
            {
                if(!f.empty()&&f.top()=='(')
                {
                    f.pop();
                }
                else
                    flag=1;
            }
            else if(s[i]==']')
            {
                if(!f.empty()&&f.top()=='[')
                {
                    f.pop();
                }
                else
                    flag=1;
            }
            else
                flag=1;
        }
        if(flag||f.size()>0)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
}




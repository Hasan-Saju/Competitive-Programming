
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
    int n,check=1,kount=0,x,t;
    stack<int>st;
    cin>>n;
    t=2*n;
    string s;
    while(t--)
    {
        cin>>s;
        if(s[0]=='a')
        {
            cin>>x;
            st.push(x);
        }
        else{
            if(!st.empty())
            {
                if(st.top()==check)
                {
                    st.pop();
                }
                else{
                        kount++;
                    while(!st.empty())
                    {

                        st.pop();
                    }
                }
            }
        check++;
        }
    }
    cout<<kount;
}



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
    int i,n,ans=0,kount=0,t,j,flag=0;
    string s;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>s;
        flag=0;
        kount=0;
        ans=0;
        for(j=0;j<s.size();j++)
        {
            if(!flag&&s[j]=='A')
            {
                flag=1;
            }

          else  if(flag&&s[j]=='P')
            {
                kount++;
            }
            else
            {
               // cout<<kount<<" ";
                ans=max(ans,kount);
                kount=0;
            }


        }
        ans=max(ans,kount);
        cout<<ans<<endl;

    }




}




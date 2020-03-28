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
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
ll lcm(ll a,ll b)
{
    return a*b/gcd(a,b);

}

int main()
{
    fast
    //freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {

        int k=0,i,x;
        vector<int>v;
        int n,ans=0;
        cin>>n;
        FOR(i,n)
        {
            cin>>x;
            v.pb(x);

        }
        FOR(i,n)
        {
        if(v[i]%2==0)
            {
                cout<<"1"<<endl<<i+1<<endl;
                ans=1;
               break;
            }
        }
        if(n==1&&v[0]%2!=0)
        {
            cout<<"-1"<<endl;
        }
        else if(!ans)
        {
            FOR(i,n)
            {
                if(v[i]%2!=0&&!k)
                {
                    cout<<"2"<<endl<<i+1<<" ";
                    k=1;
                }
               else  if(v[i]%2!=0&&k)
                {
                    cout<<i+1<<endl;
                   break;
                }
            }
        }
    }
}


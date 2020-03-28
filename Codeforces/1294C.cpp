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
    ll t,n,i,Ansfound=0;
    vector<ll>v;
    cin>>t;
    while(t--)
    {
        Ansfound=0;
        cin>>n;
        for(i=2; i*i<n; i++)
        {
            if(n%i==0)
            {
                v.pb(i);
                n/=i;
                if(v.size()==2)
                {
                    if(v[0]!=v[1]&&v[1]!=n&&n>=2){cout<<"YES"<<endl<<v[0]<<" "<<v[1]<<" "<<n<<endl;
                   // else cout<<"NO"<<endl;
                   Ansfound=1;
                    break;
                    }
                }
            }


        }
        if(!Ansfound)cout<<"NO"<<endl;
        v.clear();

    }

}


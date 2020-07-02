#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define NL "\n"
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    fast
    ll n;
    cin>>n;

    vector<ll> v,ans;
    set<ll>s;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.emplace_back(x);
    }

    ll l=-1,days=0,sum=0,noAns=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum<0)
        {
            noAns=1;
            break;
        }

        if(s.find(v[i])!=s.end())
        {
            noAns=1;
            break;
        }

        else
        {
        if(v[i]<0)s.insert(-v[i]);
        else s.insert(v[i]);
        }

        if(sum==0)
        {
            if(i-l!= s.size()*2)
            {
                noAns=1;
                break;
            }
            else
            {
            days++;
            ans.emplace_back(i-l);
            l=i;
            s.clear();
            }

        }

    }
    if(sum!=0)
        noAns=1;

    if(noAns)
        cout<<"-1\n";
    else
    {
        cout<<days<<NL;
        for(auto x:ans )
            cout<<x<<" ";
    }
}

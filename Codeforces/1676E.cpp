#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n,q;
        cin>>n>>q;
        vector<ll>sugar;
        ll x;

        for(int j=0; j<n; j++)
        {
            cin>>x;
            sugar.push_back(x);
        }
        sort(sugar.begin(),sugar.end());
        reverse(sugar.begin(),sugar.end());

        for(int j=1; j<n; j++)
        {
            sugar[j]=sugar[j-1]+sugar[j];
        }
        int ans;
         for(int j=0; j<q; j++)
        {
            cin>>x;
            ans = lower_bound(sugar.begin(), sugar.end(),x)-sugar.begin()+1;
            if(ans>n)
                ans=-1;
            cout<<ans<<"\n";
        }



    }
}

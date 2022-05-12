#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        ll n,k;
        cin>>n>>k;
        vector<int>v;
        map<ll,ll>mp;
        for(int j=0; j<n; j++)
        {
            ll x;
            cin>>x;
            mp[x]++;
        }

        for(auto x:mp)
        {
            if(x.second>=k)
                v.push_back(x.first);
        }

        int mx=INT_MIN;
        int left=0;
        int consec=1;
        int right=0;
        int j;
//        for(auto x:v)
//            cout<<x<<" ";
//        cout<<"\n";
        for(j=1; j<v.size(); j++)
        {
            if(abs(v[j]-v[j-1])==1)
            {
                consec++;
            }
            else
            {
                //cout<<v[j]<<"\n";
                if(consec>=mx)
                    right=j-1;
                mx=max(consec,mx);
                consec=1;
            }
        }
        if(consec>=mx)
        {
            mx=max(consec,mx);
            right=j-1;
        }

        //cout<<mx<<"\n";

        if(v.size()==0)
            cout<<"-1\n";
        else
            cout<<v[right-mx+1]<<" "<<v[right]<<"\n";


    }
}

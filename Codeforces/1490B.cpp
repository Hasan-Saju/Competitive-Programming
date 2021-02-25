#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>v;
        map<int,int>mp;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            mp[x%3]++;
        }
        int perf=n/3;
        int ans=0;

        for(int j=0;j<=2;j++)
        {
            if(mp[j]<perf)
            {
                if(mp[(j+2)%3]>perf)
                {
                    int temp=min(perf-mp[j],mp[(j+2)%3]-perf);
                    ans+=temp;
                    mp[j]+=temp;
                    mp[(j+2)%3]-=temp;
                }
                if(mp[j]<perf and mp[(j+1)%3]>perf)
                {
                    int temp=min(perf-mp[j],mp[(j+1)%3]-perf);
                    ans+=temp*2;
                    mp[j]+=temp;
                    mp[(j+1)%3]-=temp;
                }
            }
            else
                continue;
        }


        cout<<ans<<"\n";
    }
}

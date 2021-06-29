#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        vector<int>a,b;
        map<int,int>ma,mb;

        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            a.push_back(x);
            ma[x]=j;
        }
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            b.push_back(x);
            mb[x]=j;
        }

        set<int>s;
        for(int j=1; j<=n; j++)
        {
            s.insert(j);
        }
//        for(auto y:s)
//            cout<<y<<" ";
//        cout<<"\n";

        int circle =0;
        long long ans=1;
        long long mod=1000000007;

        while(!s.empty())
        {
            vector<int>del;

            int x= *s.begin();

//            cout<<"\n";
//            cout<<x<<"\n";
            int start=ma[x];
            del.push_back(x);
            int endd=b[start];
            int anext=-1;
            while(x!=endd)
            {
                //cout<<x<<" "<<endd<<"\n";
                anext=ma[endd];
                del.push_back(a[anext]);
                endd=b[anext];

            }
            circle++;
            //cout<<circle<<"\n";
            ans=(ans*2)%mod;

            for(auto x:del)
            {
                //cout<<x<<" ";
                s.erase(x);
            }

            if(s.empty())
                break;

//            cout<<"\n";
//            for(auto y:s)
//                cout<<y<<" ";
//            cout<<"\n";
            del.clear();


        }
        cout<<ans<<"\n";
        a.clear();
        b.clear();
        ma.clear();
        mb.clear();

    }


}

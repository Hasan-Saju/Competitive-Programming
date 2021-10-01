#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n,m;
        cin>>n>>m;

        vector<vector<ll> >vv;
        vector<ll>all;
        map<ll,int>mac;
        set<ll>s;

        int z=0;

        for(int j=0; j<n; j++)
        {
            vector<ll>v;
            for(int k=0; k<m; k++)
            {
                int x;
                cin>>x;
                v.push_back(x);
                all.push_back(x);
                s.insert(x);

            }
            vv.push_back(v);
        }

        for(auto b:s)
        {
            mac[b]=z;
            z++;
        }
        sort(all.begin(),all.end());

        //map<int,bool>mp;
        int mp[m+1]={0};

        for(int j=0; j<m; j++)
        {
            //mp[all[j]]=true;
            mp[ mac[all[j]] ]++;
        }

        int ansIndex=0;

        for(int j=0; j<vv.size(); j++)
        {
            sort(vv[j].begin(),vv[j].end());

            if(ansIndex<m)
            rotate(vv[j].begin(),vv[j].begin()+vv[j].size()-ansIndex,vv[j].end());
            //cout<<"first\n";
            for(int k=0; k<m; k++)
            {
                //cout<<"in\n";
                if(mp[ mac[vv[j][k]] ]>0)
                {
                    //mp.erase(vv[j][k]);
                    ansIndex++;
                    mp[ mac[vv[j][k]] ]--;
                }
                cout<<vv[j][k]<<" ";
                //cout<<"second\n";
            }
            cout<<"\n";
        }
    }

}

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
int main()
{
    fast
  //  freopen("out.txt", "w", stdout);
    set<string>s;
    map<string,int>m;
    map<string,int>::iterator it;
    double per;
    int t,total=0,kount=0;
    cin>>t;
    string st;
    getline(cin,st);
    while(true)
    {
       int flag=0;
        getline(cin,st);
        if(st.size()==0)
        {
            kount++;
            for(it=m.begin(); it!=m.end(); it++)
            {
                flag=1;
                per=(double)(it->second)/total*100;//percentage
                cout<<it->first<<" "<<fixed<<setprecision(4)<<per<<endl;
               // cout<<it->first<<" "<<it->second<<" "<<total<<" "<<"mm"<<endl;
            }



            if(kount==t+1)
            {
                return 0;
            }

            if(flag)cout<<endl;
             m.clear();
                s.clear();
                total=0;

        }
        else
        {
            m[st]+=1;
            s.insert(st);
            total++;


        }

    }


}


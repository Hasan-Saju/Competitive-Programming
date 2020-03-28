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
    set<string>s;

    double per;
    int t,total=0,kount=0;
    cin>>t;
    cin.ignore();//buffer clear korlam, cz buffer a t ase
    cin.ignore();//porer khali line ta bad dilam


    while(t--)
    {
        map<string,int>m;
        map<string,int>::iterator it;
        string st;
        total=0;

        while(getline(cin,st) and !st.empty())
        {
            m[st]+=1;
            total++;
        }
        for(it=m.begin(); it!=m.end(); it++)
        {
            per=(double)(it->second)/total*100;//percentage
            cout<<it->first<<" ";
            cout<<fixed;
            cout<<setprecision(4)<<per<<endl;

        }
    if(t>0)cout<<endl;
    }

}
//map a count rakhsi erpor just total diye vag

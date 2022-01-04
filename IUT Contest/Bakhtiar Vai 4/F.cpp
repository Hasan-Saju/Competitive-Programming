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
    int t,NT=1;
    cin>>t;
    while(t--)
    {


    map<string,int>m;
    int n,timeCap,D,i;
    string s,hw;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s>>timeCap;//timeeCapable
        m.insert(make_pair(s,timeCap));
    }
    cin>>D>>hw;

    cout<<"Case "<<NT<<": ";
        NT++;
    if(m[hw]<=D&&m[hw]!=0)cout<<"Yesss"<<endl;
    else if(m[hw]<=D+5&&m[hw]!=0)cout<<"Late"<<endl;
    else cout<<"Do your own homework!"<<endl;
    }

}

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
    //freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);
    string f,s,ans="";
    int diff=0;
    cin>>f>>s;
    if(f.size()>s.size())
    {
        diff=f.size()-s.size();
        while(diff--){
            ans+="0";
        }
        s=ans+s;
    }

    if(f.size()<s.size())
    {
        diff=s.size()-f.size();
        while(diff--){
            ans+="0";
        }
        f=ans+f;
    }
    if(f>s)cout<<">";
    else if(f<s)cout<<"<";
    else cout<<"=";

    //cout<<endl<<f<<" "<<s;
}


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
    int n,i,indx=0,j;
    string s,refr;
    refr="ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
    for(j=0;;j++)
    {
    cin>>n>>s;
    if(n==0)return 0;
    reverse(s.begin(),s.end());
    for(i=0;i<s.size();i++)
    {

        if(s[i]=='_')indx=26+n;
        else if(s[i]=='.')indx=27+n;
        else indx=s[i]-'A'+n;

        if(indx>27)indx=indx-28;
        cout<<refr[indx];
    }
    cout<<endl;
    }
}




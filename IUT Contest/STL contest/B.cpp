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
    int h=0,e=0,l=0,o=0,i;
string s;
cin>>s;

for(i=0;i<s.size();i++)
{
    if(s[i]=='h')h++;
    if(s[i]=='e')e++;
    if(s[i]=='l')l++;
    //if(s[i]=='l')l++;
    if(s[i]=='o')o++;
}
if(h>=1&&e>=1&&l>=2&&o>=1)cout<<"YES";
else cout<<"NO";
}


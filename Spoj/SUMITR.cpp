#include<bits/stdc++.h>
using namespace std;
#define l(i,n) for(int i=1;i<=n;i++)
int main(){int t,n,x;cin>>t;l(c,t){int d[111][111],a=0;cin>>n;l(i,n)l(j,i){cin>>x;d[i][j]=x+max(d[i-1][j],d[i-1][j-1]);a=max(a,d[i][j]);}cout<<a<<"\n";}}

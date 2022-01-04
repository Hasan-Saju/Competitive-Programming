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
        ll n1,n2,n3,n4,n5,kount=0,big,i,x;
        ll ara[1000000+6];
        memset(ara,0,sizeof(ara));
        big=-1111;
         cin>>n1>>n2>>n3>>n4>>n5;
        for(i=0;i<n1;i++)
        {
            cin>>x;
            ara[x]+=1;
            big=max(big,x);
        }
        for(i=0;i<n2;i++)
        {
            cin>>x;
            ara[x]+=1;
            big=max(big,x);
        }
        for(i=0;i<n3;i++)
        {
            cin>>x;
            ara[x]+=1;
            big=max(big,x);
        }
        for(i=0;i<n4;i++)
        {
            cin>>x;
            ara[x]+=1;
            big=max(big,x);
        }
        for(i=0;i<n5;i++)
        {
            cin>>x;
            ara[x]+=1;
            big=max(big,x);
        }

        for(i=0;i<big;i++)
        {
            if(ara[i]>2)kount++;
        }
        cout<<kount;
}


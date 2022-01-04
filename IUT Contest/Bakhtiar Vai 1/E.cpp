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
//int ara[10000007];
int main()
{
    ll n,q,i,a,b,k,j;
   // memset(ara,0,sizeof(ara));
    cin>>n>>q;
    vector<ll>ara(n,0);
 //   vi ara(100000000,0);
    for(i=0;i<q;i++)
    {
        cin>>a>>b>>k;
        ara[a-1]+=k;
        ara[b]+=(-k);
       // for(j=0;j<n;j++)cout<<ara[j]<<" ";
    }
     for(i=1;i<n;i++)
        ara[i]=ara[i]+ara[i-1];//cummulative sum

     sort(ara.begin(),ara.end());
     cout<<ara[n-1]<<endl;
     return 0;

}

/*
1  	 2   	3  	4 	5
100 	0 	-100	 0	 0
100 	100 	-100	0 	0	-100
100	100	0	0	-100




100  	200	200  200  100
*/
/*
1	 2	 3	 4	 5	 6	 7	 8	 9	 10
3					-3
			7					-7
					1				-1
3 	3	3	10
*/

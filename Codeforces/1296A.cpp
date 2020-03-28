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

    int t,sum,flag,x,n,i,odd,even;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        flag=0;
        even=0,odd=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x%2==0)even=1;
            else odd=1;
            sum+=x;
        }
        if(sum%2!=0||(sum%2==0&&even==1&&odd==1))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}


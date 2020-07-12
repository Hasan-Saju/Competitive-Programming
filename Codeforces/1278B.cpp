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
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        int diff=abs(b-a);
        if(diff==0)
            {
                cout<<"0"<<"\n";
                continue;
            }

        int sum=0;
        int x=1;

        while(true)
        {
            sum=(x*(x+1))/2;
            //cout<<sum<<" "<<diff<<"\n";
            if(sum>=diff and sum%2==diff%2)break;
            x++;
        }

        cout<<x<<"\n";

    }
}










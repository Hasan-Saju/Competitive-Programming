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
    int t,n,x,y,diff,finall,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        finall=0;
        for(j=0;j<2*n;j++)
        {
            if(j%2==0)
            cin>>x;
            else
            {
                cin>>y;
                diff=y-x-1;
                finall^=diff;
            }

        }
        cout<<"Case "<<i<<": ";
        if(finall>0)cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }


}


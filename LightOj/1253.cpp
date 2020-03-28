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
  //  freopen("out.txt", "w", stdout);   //to write the output in a txt file
    int t,x,ans,j,i;
    bool edge=true;//edgecase
    cin>>t;

    FOR(i,t)
    {
        edge=true;
        int k;
        cin>>k;
        ans=0;
        FOR(j,k)
        {
            cin>>x;
            if(x>1)
            {
                edge=false;
            }
            ans^=x;
        }
        cout<<"Case "<<i+1<<": ";

        if(edge==true)
        {
            if(k%2!=0)
                cout<<"Bob"<<endl;
            else
                cout<<"Alice"<<endl;
        }
        else
        {
            if(ans)
                cout<<"Alice"<<endl;
            else
                cout<<"Bob"<<endl;


        }

    }


}




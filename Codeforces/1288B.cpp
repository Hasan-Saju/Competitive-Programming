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
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,kount=0,i,j,dig;
        double x;
        cin>>a>>b;
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=b;j++)
            {
                x=log(j);
                x=ceil(x);
                dig=x;

                if(((i*j)+i+j)==((i*pow(10,dig))+j))
                {
                    kount++;
                    cout<<i<<" "<<j<<" "<<(i*j)+i+j<<" "<<((i*pow(10,dig))+j);
                }
              //  cout<<j<<" ";
               // cout<<kount<<" ";
            }
        }
        cout<<endl<<kount<<endl;
    }



}


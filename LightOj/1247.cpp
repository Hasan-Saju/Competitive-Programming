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
//nim game
//prottek ta row ekta pile er moto behave korbe
int main()
{
    fast
   // freopen("out.txt", "w", stdout);//if we need to write the output in a txt
    int t;
    cin>>t;
    int x,ans=0,i,r,c,sum=0;
    bool edge =true;

    for(i=1; i<=t; i++)
    {
        sum=0;
        ans=0;
        int row,col;
        cin>>row>>col;

        for(r=0; r<row; r++)
        {
            sum=0;
            for(c=0; c<col; c++)
            {
                cin>>x;
                sum+=x;


            }
            ans^=sum;
        }

         cout<<"Case "<<i<<": ";

             if(!ans)
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;


    }

}


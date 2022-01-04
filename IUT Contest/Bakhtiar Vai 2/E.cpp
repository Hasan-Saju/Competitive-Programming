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
int ara[500];
int main()
{
    int n,i,sum=0;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>ara[i];
    for(i=0; i<n; i++)
    {
        if(ara[i]>sum+1)
        {
            cout<<sum+1;
            return 0;
        }
        else
        {
            sum+=ara[i];//1 theke sum porjonto shob number ager combination gula diye banano jabe
        }
    }
    cout<<sum+1;

}




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

ll BMod(ll B,ll P,ll M)
{
    ll R=1;
    B=B%M;
    while(P)
    {
        if(P&1)
            R=(R*B)%M;
        P >>= 1;
        B=(B*B)%M;
    }
    return R;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
ll lcm(ll a,ll b)
{
    return a*b/gcd(a,b);

}
int numOfDigit(int num)
{
    ll k=0;
    while(num>0)
    {
        num=num/10;
        k++;
    }
    return k;
}


int main()
{
    fast
    //freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);
    int x;
    int num,k;
    while(scanf("%d",&x)==1)
    {
        // cout<<"check";
        num=0;
        k=0;
        do
        {
            num=((num*10)+1)%x;
            k++;
        }while(num!=0);
        printf("%d\n",k);
    }

    return 0;
}


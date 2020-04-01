#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define ff          first
#define ss          second
#define vi          vector<int>
#define si          set<int>
#define FOR(i,n)    for(int i=0;i<n;i++)
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define SP(x)       fixed<<setprecision(x)
#define fWrite      freopen("out.txt", "w", stdout);//to write the output in a txt file
#define fRead       freopen("in.txt", "r", stdin);
#define asi         cout<<"Check"<<endl;
#define bye         return 0
#define ok          cout<<"OK"<<endl
//lower_bound == Shoman othoba prothom boro element ta return korbe//iterator return kore
//upper bound mane first boro element return korbe
//string s(n,'a');

ll Digits(ll a)
{
    return(floor(log10(a))+1);
}
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


int main()
{
    fast
    int n;
    cin>>n;

    int x,sum=0,mid,bmid,maxx=0,minn=0,i;
    int flag=0;
    vi v;

    FOR(i,n)
    {
        cin>>x;
        v.pb(x);
        sum+=x;
    }

    if(sum%n==0)
    {
        mid=sum/n;

        for(i=0;i<v.size();i++)
        {
            if(v[i]<mid)minn+=abs(v[i]-mid);
            else if(v[i]>mid)maxx+=abs(v[i]-mid);
        }
        cout<<max(maxx,minn);

    }
    else
    {
        mid=sum/n;
        bmid=mid+1;
         for(i=0;i<v.size();i++)
         {
             if(v[i]!=mid and v[i]!=bmid){flag=1;}
            if(v[i]>bmid)maxx+=abs(bmid-v[i]);
             else if(v[i]<mid)minn+=abs(mid-v[i]);

         }

         if(!flag)cout<<"0";
         else cout<<max(maxx,minn);
        // cout<<maxx<<minn;
    }



}


#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define ff          first
#define ss          second
#define vi          vector<int>
#define si          set<int>
#define pi          pair<int,int>
#define FOR(i,n)    for(int i=0;i<n;i++)
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define SP(x)       fixed<<setprecision(x)
#define fWrite      freopen("out.txt", "w", stdout);//to write the output in a txt file
#define fRead       freopen("in.txt", "r", stdin);
#define asi         cout<<"Check"<<endl
#define bye         return 0
#define ok          cout<<"OK"<<endl
#define NL          "\n"
//lower_bound == Shoman othoba prothom boro element ta return korbe//iterator return kore
//upper bound mane first boro element return korbe
//string s(n,'a');
//ans+=string(r,'R');

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
ll POW(ll  B,ll P)
{
    ll R=1;
    while(P) {
        if(P&1)
            R=R*B;
        B=B*B;
        P>>=1;
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

int ans[300006];

int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        memset(ans,0,sizeof(ans));
        set<pair<int,int> >s;
        pair<int,int>temp;

        s.insert({n,-1});  // bar len ar starting point input nisi

        int kounter=0;

        while(!s.empty())
        {
            kounter++;

            temp=*(s.rbegin());
            int len=temp.ff;
            int start=-1*temp.ss;
            s.erase(temp);

            int finish=start+len-1;

            int mid= (start+finish)/2;
            ans[mid]=kounter;

            if(mid-start)
            s.insert({(mid-1)-start+1,(-1*start)});
            if(finish-mid)
            s.insert({(finish-(mid+1)+1),(-1*(mid+1))});


        }
        for(int i=1;i<=n;i++)
            cout<<ans[i]<<" ";
        cout<<NL;





    }

}


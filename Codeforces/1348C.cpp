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
#define asi         cout<<"Check"<<endl
#define bye         return 0
#define ok          cout<<"OK"<<endl
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
    while(P)
    {
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


int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,flag=0;
        cin>>n>>k;
        string s;
        cin>>s;
        sort(s.begin(),s.end());

        // case when s = aaabdde k=4 ans(b)
        if(s[0]!=s[k-1])
        {
            cout<<s[k-1]<<endl;
            flag=1;
        }

        // case when s= aaaabcde  k=4 (abcde)//first step er porer gula alada
        string ans="";
        ans+=s[0];

        if(s[k] !=s[n-1] && !flag)
        {

            for(int i=k; i<n; i++)
                ans+=s[i];
            cout<<ans<<endl;
        }

        // case when s= aaaaaa  k=3 (aa) //porer gula same
        else if(!flag)
        {
            int temp=s.size()-k;
            if(temp%k==0)temp=temp/k;
            else temp= (temp/k)+1;

        ans+=string(temp,s[n-1]);
        cout<<ans<<endl;

        }


    }

}


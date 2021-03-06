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
bool alp[26];

bool possibility(string s)
{
    vector<set<int> >v(26);
    FOR(i,s.size()-1)
    {
        v[s[i]-'a'].insert(s[i+1]-'a');
        v[s[i+1]-'a'].insert(s[i]-'a');
    }
    int start=-1;

    FOR(i,26)
    {
        if(v[i].size()==1)start=i;
        if(v[i].size()>2)
        {
            start=-1;
            break;
        }
    }
    if(start==-1)return false;
    else return true;

}

int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        string s,ans="";
        cin>>s;
        set<char>sett,check;

        FOR(i,s.size())
        sett.insert(s[i]);

        int uniq=sett.size();

        int left=-1,right=-1;

        for(int i=0;i<s.size()-(uniq-1);i++)
        {
            for(int j=i;j<i+uniq;j++)
            {
                check.insert(s[j]);
            }
            if(check.size()==uniq)
            {
                left=i;
                right=left+uniq;
                break;
            }
            check.clear();
        }

        memset(alp,true,sizeof(alp));

        for(int i=left;i<right;i++)
        {
            int x=s[i]-'a';
            alp[x]=false;
            ans+=s[i];
        }

        if(possibility(s)||s.size()==1)cout<<"YES"<<NL;
        else
        {
            cout<<"NO"<<NL;
            continue;
        }

        cout<<ans;
        char ch;
        FOR(i,26)
        if(alp[i]==true)
            cout<<(ch=i+'a');
        cout<<NL;
    }

}


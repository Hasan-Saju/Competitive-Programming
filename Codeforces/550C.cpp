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

#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define SP(x)       fixed<<setprecision(x)
#define fWrite      freopen("out.txt", "w", stdout);//to write the output in a txt file
#define fRead       freopen("in.txt", "r", stdin);
#define PI          2*acos(0.0)
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
int factory(char a,char b, char c)
{
    int x= (100*(a-'0')) + (10*(b-'0')) + (c-'0');
    return x;
}
int factory2(char a,char b)
{
    int x= (10*(a-'0')) + (b-'0');
    return x;
}

int main()
{
    fast
    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
        {
            cout<<"YES"<<NL<<"0";
            bye;
        }
        else if(s[i]=='8')
        {
            cout<<"YES"<<NL<<"8";
            bye;
        }
    }

    if(s.size()<=2)
    {
        int x=stoi(s);
        if(x%8==0)
        {
            cout<<"YES"<<NL<<x;
            return 0;
        }

    }

    for(int i=0; i<s.size(); i++)
    {
        for(int j=i+1; j<s.size(); j++)
        {
            int x= factory2(s[i],s[j]);
                if(x%8==0)
                {
                    cout<<"YES"<<NL<<x;
                    return 0;
                }
        }
    }


    for(int i=0; i<s.size(); i++)
    {
        for(int j=i+1; j<s.size(); j++)
        {
            for(int k=j+1; k<s.size(); k++)
            {
                int x= factory(s[i],s[j],s[k]);
                if(x%8==0)
                {
                    cout<<"YES"<<NL<<x;
                    return 0;
                }
            }

        }
    }
    cout<<"NO";

}


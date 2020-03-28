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

void factory(string s)
{
    int a1=0,a2=0;
    string ans1="";
    string ans2="";
    for(int i=0;i<s.size();i++)
    {
        int temp;
        temp=s[i]-'0';
        if(temp==2)
        {
            if(a1==0)
            {
            ans1=ans1+"1";
            ans2=ans2+"1";
            }
            else
            {
                ans1+="0";
                ans2+="2";
            }

        }
        else if(temp==0)
        {
            ans1+="0";
            ans2+="0";
        }
       else if(temp==1)
        {
            if(a1==0)
            {
                ans1+="1";
                ans2=ans2+"0";
                a1=1;
            }
            else
            {
                ans2=ans2+"1";
                ans1+="0";

            }
        }
        else if(temp==3)
        {
            if(a1==0)
            {
                ans1+="2";
                ans2=ans2+"1";
                a1=1;
            }
            else
            {
                ans2=ans2+"3";
                ans1+="0";

            }
        }

    }
    cout<<ans1<<"\n"<<ans2<<"\n";
}


int main()
{
    fast
    //freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        factory(s);
    }


}


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

ll digits(ll a)
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
    //freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);
    int n,i,kount=0;
    cin>>n;
    string st;
    cin>>st;
    stack<char>s;

    for(i=0;i<st.size();i++)
    {

        cout<<st[0]<<" ";
        if(st[i]=='(')
        {
            s.push(st[i]);
            cout<<"f"<<endl;
        }
        else if(!s.empty()&&st[i]==')')
        {
            s.pop();
            cout<<"s"<<endl;
        }
        else
        {
            kount++;
            cout<<"t"<<endl;
        }
    }
    cout<<endl<<kount;

}


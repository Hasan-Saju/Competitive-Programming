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

    int A,B,C;
    cin>>A>>B>>C;
    double a,b,c,a1,a2;
    a=(double)A;
    b=(double)B;
    c=(double)C;

    //cout<<SP(6)<<a<<" "<<b<<" "<<c<<endl;

    if(a==b and b==c and c==a and a!=0)
    {
        cout<<"0";
        return 0;
    }
     else if(a==b and b==c and c==a and a==0)
     {
         //asi
         cout<<"-1";
         return 0;
     }

    else if(a==0 and b==0)
    {
        cout<<"0";
        return 0;
    }
    else if(a==0)
    {
        cout<<"1\n"<<SP(10)<<(-c)/b;
        return 0;
    }
    else if(a==c and b==0 and c!=0)
    {
        cout<<"0";
        return 0;
    }
//0 0 0

    a1=((-b)+sqrt(b*b-4*a*c))/(2.0*a);
    a2=((-b)-sqrt(b*b-4*a*c))/(2.0*a);

    //cout<<a1<<" "<<a2<<endl;
    if(isnan(a1) or isnan(a2)) cout<<"-1";
    else if(a1==a2)cout<<"1\n"<<SP(10)<<a1;
    else if(a1!=a2)cout<<"2\n"<<SP(10)<<min(a1,a2)<<endl<<max(a1,a2);
    else cout<<"0";

}
//-2x+1

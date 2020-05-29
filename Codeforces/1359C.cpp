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

int main()
{
    fast
    int t;
    cin>>t;

    while(t--)
    {

        int h,c,tem;
        cin>>h>>c>>tem;

        if(h==tem)              //er beshi temp howa possible na
        {
            cout<<"1"<<NL;
            continue;
        }
        else if((2*tem)<=(h+c))     //er kom o howa possible na
        {
            cout<<"2"<<NL;
            continue;
        }
        else                    //ek cup hot beshi thakbo ( hx+ c(x-1))/(2x-1)=t main equation
        {
            ll lowerx= (c-tem)/(h+c-(2*tem));

            ll upperx=lowerx+1;
            //cout<<lowerx<<" "<<upperx<<NL;

            long double lowt= (double)((h*lowerx)+(c*lowerx)-c)/((2*lowerx)-1);
            long double hight= (double)((h*upperx)+(c*upperx)-c)/((2*upperx)-1);
            //cout<<lowt<<" "<<hight<<NL;

            long double lowdiff=abs((double)tem-lowt);
            long double highdiff=abs((double)tem-hight);
            //cout<<lowdiff<<" "<<highdiff<<NL;

            if(lowdiff<=highdiff)
                cout<<(2*lowerx-1)<<NL;
            else
                cout<<(2*upperx-1)<<NL;


        }
    }


}

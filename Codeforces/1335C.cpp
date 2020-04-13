
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

ll Digits(ll a)
{
    return(floor(log10(a)) + 1);
}
ll BMod(ll B, ll P, ll M)
{
    ll R = 1;
    B = B % M;
    while(P)
    {
        if(P & 1)
            R = (R * B) % M;
        P >>= 1;
        B = (B * B) % M;
    }
    return R;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);

}


int main()
{
    fast
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        int ara[300006];
        memset(ara, 0, sizeof(ara));
        set<ll>s;
        set<ll>koybar;
        cin >> n;
        ll maxx = -99999;
        FOR(i, n)
        {
            ll x;
            cin >> x;
            s.insert(x);
            ara[x]++;
            //maxx=max(maxx,ara[x]);

        }
        int num = 0;
        for(ll i = 0; i <= n + 10; i++)
        {
            koybar.insert(ara[i]);
            if(ara[i] >= maxx)
            {
                maxx = ara[i];
                num = i;
            }

        }
        ll uni = s.size();
        //ll koybarmax=*(koybar.rend());
        ll koybarmax = maxx;

        ll ans = 0;


        if(uni != koybarmax)
        {
            if(n == 1)
                cout << "0" << endl;
            else
            {
                ans =  min(uni, koybarmax);
                if((ans * 2) > n)
                    ans = n / 2;
                cout << ans << endl;
            }
        }
        else
        {
            if(n == 1)
                cout << "0" << endl;
            else
            {
                koybarmax = koybarmax - 1;
                ans =  min(uni, koybarmax);
                if((ans * 2) > n)
                    ans = n / 2;
                cout << ans << endl;
            }
        }



        // cout<<min(uni,koybarmax)<<endl;

        s.clear();
        koybar.clear();

    }

}




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
    int t;
    cin >> t;
    while(t--)
    {

        int n, k;
        cin >> n >> k;
        vi v;

        vector<int >ans(n + 1, 0);
        v.pb(-1);

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.pb(x);
        }

        int i, kount = 0, maxx = -99;


        for(i = 2; i < n; i++)
        {
            if(v[i - 1]<v[i]  and  v[i]>v[i + 1] )
            {
               // cout << v[i - 1] << " " << v[i] << " " << v[i + 1] << endl;
                ans[i] = 1;
            }
        }
//        for(i=1;i<=n;i++)cout<<ans[i]<<" ";
//        cout<<endl;

        for(i = 2; i <= n; i++)
        {
            ans[i] = ans[i - 1] + ans[i];
        }
//        for(i=1;i<=n;i++)cout<<ans[i]<<" ";
//        cout<<endl;

        for(int l = 1; l <= n; l++)
        {
            if(l + k - 2 < 1 or l + k - 2 > n)
                continue;
            int temp = ans[l + k - 2] - ans[l];
            if(temp > maxx)
            {
                maxx = temp;
                i = l;
            }
        }

        cout << maxx + 1 << " " << i<<endl;
    }

}


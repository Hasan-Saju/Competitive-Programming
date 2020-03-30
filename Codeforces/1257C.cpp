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
#define ok          cout<<"OK"<<endl;
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

vector<int>V[900005];

int main()
{
    fast
    //cout << "check" << endl;
    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = 9999999, temp;
        cin >> n;
        si sett;


        for(int i=0; i<n; i++)
        {
            // ok
            int x;
            cin >> x;
            sett.insert(x);
            V[x].push_back(i + 1);
        }
        if(sett.size() == n)
            cout << "-1\n";
        else
        {

            for(auto it = sett.begin(); it != sett.end(); it++)
            {
                if(V[*it].size() >= 2)
                {
                    for(int i = 0; i < V[*it].size() - 1; i++)
                    {
                        //  cout<<*it<<"mai "<<V[*it][i]<<" ";
                        temp = V[*it][i + 1] - V[*it][i] + 1;
                        ans = min(ans, temp);
                        //cout<<*it<<" "<<temp<<endl;
                    }

                }
            }

            cout << ans << endl;
        }

        for(auto it = sett.begin(); it != sett.end(); it++)
        {
            V[*it].clear();
        }
        sett.clear();

    }

}

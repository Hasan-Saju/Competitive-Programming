#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define MOD 1000000007
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)

//ll ipow(ll base, ll exp)
//{
//    ll result = 1;
//    for (;;)
//    {
//        if (exp & 1)
//            result *= base;
//        exp >>= 1;
//        if (!exp)
//            break;
//        base *= base;
//    }
//
//    return result;
//}

//long long binpow(long long a, long long b) {
//    if (b == 0)
//        return 1;
//    long long res = binpow(a, b / 2);
//    if (b % 2)
//        return res * res * a;
//    else
//        return res * res;
//}


//long long binpow(long long a, long long b) {
//    long long res = 1;
//    while (b > 0) {
//        if (b & 1)
//            res = res * a;
//        a = a * a;
//        b >>= 1;
//    }
//    return res;
//}

//unsigned long long int ipow( long base, long exp )
//{
//    unsigned long long int result = 1ULL;
//    while( exp )
//    {
//        if ( exp & 1 )
//        {
//            result *= (unsigned long long int)base;
//        }
//        exp >>= 1;
//        base *= base;
//    }
//    return result;
//}


long long int power (long long int a, long long int b) {
    long long int ans=1ll;
    while(b) {
        if(b&1)ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b=b/2;
    }
    return ans;
    }


int main()
{
    ll t,b1,p1,b2,p2,neww,now;
    cin>>t;
    while(t--)
    {
        cin>>b1>>p1>>b2>>p2;
        if(b1>b2&&p1>p2)cout<<"HaHa";
        else if(b2>b1&&p2>p1)cout<<"Congrats";
        else if(b1>=b2&&p1>p2||b1>b2&&p1>=p2)cout<<"HaHa";
        else if(b1<=b2&&p1<p2||b1<b2&&p1<=p2)cout<<"Congrats";
        else if(b1==b2&&p1==p2)cout<<"Lazy";
        else{
        now=power(b1,p1);
        neww=power(b2,p2);
        if(neww>now)cout<<"Congrats"<<endl;
        else if(neww<now)cout<<"HaHa"<<endl;
        else cout<<"Lazy"<<endl;
        }
    }
    //cout<<now<<" "<<neww;
}

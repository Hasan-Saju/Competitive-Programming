#include<bits/stdc++.h>
using namespace std;

#define ll long long

set<pair<ll,ll>> rabin_karp(string s,ll len)
{
    ll S=s.size();
    ll prime=53;
    ll prime2=103;
    ll mod=1e9+9;
    ll mod2=1e9+7;

    vector<ll> power(S),power2(S);
    power[0]=1;
    power2[0]=1;

    for(ll i=1;i<S;i++)
        power[i]= ((power[i-1]%mod) * (prime%mod)) %mod;
    for(ll i=1;i<S;i++)
        power2[i]= ((power2[i-1]%mod2) * (prime2%mod2)) %mod2;

    vector<ll> Hash(S+1,0),Hash2(S+1,0);
    for(ll i=0;i<S;i++)
        Hash[i+1]= (Hash[i] + (s[i]-'a'+1)*power[i])%mod;
    for(ll i=0;i<S;i++)
        Hash2[i+1]= (Hash2[i] + (s[i]-'a'+1)*power2[i])%mod2;

        set<pair<ll,ll>>convert;
    for(ll i=0;i<=S-len;i++)
    {
        ll temp = (Hash[i+len]-Hash[i])%mod;
        temp = (temp+mod)%mod;
        temp = (temp*power[S-i-1]) %mod;

        ll temp2= (Hash2[i+len]-Hash2[i])%mod2;
        temp2 = (temp2+mod2)%mod2;
        temp2 = (temp2*power2[S-i-1])%mod2;
        //cout<<temp<<" ";
        convert.insert(make_pair(temp,temp2));
    }
    return convert;

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        set<pair<ll,ll>>convert;
        convert=rabin_karp(s,k);

        cout<<convert.size()<<"\n";
    }
}













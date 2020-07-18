#include<bits/stdc++.h>
using namespace std;

#define ll  long long
#define Max 100000+6

ll Hash1[Max];
ll Hash2[Max];

ll mod1=1e9+7;
ll mod2=1e9+9;

vector<ll> pow1(Max);
vector<ll> pow2(Max);

ll prime=211;

ll len1,n,k,game;

char s1[Max];
char s2[Max];

map<pair<ll,ll>,ll>mp;
set<ll>st;

ll cmp_hash1(ll l, ll r, ll sz)
{
    return (Hash1[r]+mod1 -  Hash1[l-1]*pow1[sz]%mod1)%mod1;
}

ll cmp_hash2(ll l, ll r, ll sz)
{
    return (Hash2[r]+mod2 - Hash2[l-1]*pow2[sz]%mod2)%mod2;
}

void Rabin_Karp()
{
    pow1[0]=1;
    pow2[0]=1;
    for( ll i=1; i<=len1; i++)
        pow1[i]= (pow1[i-1]*prime)%mod1, pow2[i]= (pow2[i-1]*prime)%mod2;

    for( ll i=1; i<=len1; i++)
    {

        Hash1[i]= (Hash1[i-1]*prime + (s1[i]-'0'+1))%mod1;
        Hash2[i]= (Hash2[i-1]*prime + (s1[i]-'0'+1))%mod2;
    }


}

int main()
{

    scanf("%s", s1+1);
    len1=strlen(s1+1);
    cin>>game;

    Rabin_Karp();
    for(ll i=1; i<=game; i++)
    {
            scanf("%s", s2+1);
            ll len2= strlen(s2+1);
            ll temp1=0,temp2=0;

            for(ll j=1; j<=len2; j++)
            {
                temp1= (temp1*prime + (s2[j]-'0'+1))%mod1;
                temp2= (temp2*prime + (s2[j]-'0'+1))%mod2;
            }

        pair<ll,ll>gameHash;
        gameHash.first=temp1;
        gameHash.second=temp2;

        bool found=false;
        for(ll j=1; j<=len1-len2 ; j++)
        {
            ll tem1= cmp_hash1(j,j+len2-1,len2);
            ll tem2= cmp_hash2(j,j+len2-1,len2);

            pair<ll,ll>p;
            p.first=tem1;
            p.second=tem2;

           // cout<<p.first<<" "<<gameHash.first<<"\n";

            if(p==gameHash)
            {
                found=true;
                break;
            }

        }
        if(found)
            cout<<"Y\n";
        else
            cout<<"N\n";

    }


}



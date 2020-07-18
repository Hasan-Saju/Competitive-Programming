#include<bits/stdc++.h>
using namespace std;

#define ll  long long
#define Max 2000000+6

ll Hash1[Max];
ll Hash2[Max];
ll ans[Max];

ll mod1=1e9+7;
ll mod2=1e9+9;

ll pow1=1;
ll pow2=1;

ll prime=131;

ll len1,n,k,game;

char s1[Max];
char s2[Max];

map<pair<ll,ll>,ll>mp;
set<ll>st;

ll cmp_hash1(ll l, ll r)
{
    return (Hash1[r]+mod1 - Hash1[l-1]*pow1%mod1)%mod1;
}

ll cmp_hash2(ll l, ll r)
{
    return (Hash2[r]+mod2 - Hash2[l-1]*pow2%mod2)%mod2;
}

void Rabin_Karp()
{
    for( ll i=1;i<=k;i++)
        pow1= (pow1*prime)%mod1, pow2= (pow2*prime)%mod2;

    for( ll i=1;i<=len1+k; i++)
    {
        if(i>len1)
            s1[i]=s1[i-len1];

        Hash1[i]= (Hash1[i-1]*prime + (s1[i]-'a'+1))%mod1;
        Hash2[i]= (Hash2[i-1]*prime + (s1[i]-'a'+1))%mod2;
    }


    for( ll i=1; i<=game; i++)
    {
        scanf("%s", s2+1);
        ll len2= strlen(s2+1);
        ll temp1=0,temp2=0;

        for(ll j=1;j<=len2;j++)
        {
            temp1= (temp1*prime + (s2[j]-'a'+1))%mod1;
            temp2= (temp2*prime + (s2[j]-'a'+1))%mod2;
        }

        mp[make_pair(temp1,temp2)]=i;

    }
}

int main()
{
    cin>>n>>k;
    scanf("%s", s1+1);
    len1=strlen(s1+1);
    cin>>game;

    Rabin_Karp();
    for(ll i=1; i<=k; i++)
    {
        st.clear();
        for(ll j=i; j<i+n*k ; j+=k)
        {
            ll temp1= cmp_hash1(j,j+k-1);
            ll temp2= cmp_hash2(j,j+k-1);

            pair<ll,ll>p;
            p.first=temp1;
            p.second=temp2;

            if(mp.find(p)==mp.end() || st.find(mp[p])!=st.end())
                break;

            ans[(j-i)/k +1]=mp[p];
            st.insert(mp[p]);
        }
        if(st.size()==n)
        {
            cout<<"YES\n";
            for(ll j=1;j<=n;j++)
                cout<<ans[j]<<" ";
            return 0;
        }

    }

    cout<<"NO\n";

}


#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);


bool prime[1009];
vector<int>ans;
set<int>s;

void sieve(int n)
{
    int maxx=n;
    memset(prime,true,sizeof(prime));

    prime[0]=prime[1]=false;

    for(int i=4;i<=maxx;i+=2)
        prime[i]=false;

    for(int i=3; i*i<=maxx; i+=2)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=maxx; j+=2*i)
                prime[j]=false;
        }
    }

    for(int i=2;i<=n;i++)
        if(prime[i])
        ans.emplace_back(i),s.insert(i);

}

void process(int n)
{
     for( auto x:ans )
     {
         int temp=1;
         bool flag=false;

         for(;;)
         {
             temp*=x;
             if(temp>n)break;
             s.insert(temp);
             flag=true;
         }
         if(!flag)break;
     }

}

int main()
{
    fast
    int n;
    cin>>n;

    sieve(n);
    process(n);

    cout<<s.size()<<"\n";
    for(auto x:s )
        cout<<x<<" ";

}


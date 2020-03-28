#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

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
    //freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);
    vector<ll>v;
    ll n,flag=0,flag2=0,x,i,start,finish,hobena=0,stand=0,flagstand=0;
    cin>>n;
   // cout<<"check";
    FOR(i,n)
    {
        cin>>x;
        v.pb(x);
      //  cout<<"check";
    }

     for(i=1;i<n;i++)
     {
         if(v[i-1]>v[i])
         {
             stand=1;
         }
        // cout<<"c";
     }
    if(!stand)
    {
        cout<<"yes"<<endl<<"1 1";
        return 0;

    }

    for(i=1;i<n;i++)
     {
         if(v[i-1]<v[i])
         {
             flagstand=1;
         }
        // cout<<"c";
     }
    if(!flagstand)
    {
          cout<<"yes"<<endl<<"1"<<" "<<v.size();
        return 0;


    }

    for(i=1;i<n;i++)
    {
        //cout<<"c";
        if(v[i-1]>v[i]&&!flag)
        {
            start=i-1;
            flag=1;
           // cout<<start+1;
        }
        if(flag&&v[i-1]<v[i]&&!flag2)
        {
            finish=i-1;
            flag2=1;
            //cout<<finish+1;
        }
    }
    if(flag&&!flag2)
    {
        finish=v.size()-1;
    }

   partial_sort(v.begin()+start,v.begin()+finish,v.end());

   for(i=1;i<v.size();i++)
   {
       if(v[i-1]>v[i])
       {
           hobena=1;
       }
   }
   if(hobena)cout<<"no"<<endl;
   else
   {
       cout<<"yes"<<endl;
     cout<<start+1<<" "<<finish+1;
   }


}


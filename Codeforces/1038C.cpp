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

#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(a,min(b,min(c,d)))
#define max4(a,b,c,d)       max(a,max(b,max(c,d)))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))

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
    while(P)
    {
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
    int n;
    cin>>n;
    priority_queue<ll> a;
    priority_queue<ll> b;

    FOR(i,n)
    {
        ll x;
        cin>>x;
        a.push(x);
    }

    FOR(i,n)
    {
        ll x;
        cin>>x;
        b.push(x);
    }


    ll atemp,aAns=0,bAns=0;
    ll btemp;
    ll check1=0,check2=0;
    //int po=0;

    while((a.size()!=0) and (b.size()!=0))
    {

       // po++;
        //cout<<"in\n";
        atemp=a.top();
        btemp=b.top();
        //cout<<atemp<<" temp "<<btemp<<NL;
        //cout<<a.size()<<" siz "<<b.size()<<NL;
        if(atemp>=btemp)
        {
            aAns+=atemp;
            a.pop();
            check1++;
           // cout<<"one"<<NL;
        }
        else
        {
            b.pop();
            check1++;
          //  cout<<"oneelse"<<NL;
        }

        if(a.size()==0 or b.size()==0)break;

        atemp=a.top();
        btemp=b.top();
        if(btemp>=atemp)
        {
            bAns+=btemp;
            b.pop();
            check2++;
          //  cout<<"two"<<NL;
        }
        else
        {
            a.pop();
            check2++;
         //   cout<<"twoelse"<<NL;
        }
    //    cout<<aAns<<" anss "<<bAns<<NL;
         //if(a.empty() or b.empty())break;
         //if(po==15)break;
    }
  //  cout<<"baire"<<check1<<check2;

    if(a.empty() and b.empty())
    {
        cout<<atemp-btemp;
        return 0;
    }

    if(check1>check2 and !a.empty())
    {
        while(!a.empty())
        {
           // bAns+=a.top();
            a.pop();
            if(a.empty())break;
            aAns+=a.top();
            a.pop();
        }

    }
    else if(check1==check2 and !a.empty())
    {
        while(!a.empty())
        {
            aAns+=a.top();
            a.pop();
           // bAns+=a.top();
           if(a.empty())break;
            a.pop();
        }
    }
//second queue

     if(check1>check2 and !b.empty())
    {
        while(!b.empty())
        {
            bAns+=b.top();
            b.pop();
            if(b.empty())break;
            //aAns+=a.top();
            b.pop();
        }

    }
    else if(check1==check2 and !b.empty())
    {
        while(!b.empty())
        {
            //aAns+=b.top();
            b.pop();
            if(b.empty())break;
            bAns+=b.top();
            b.pop();
        }
    }

   // cout<<NL<<aAns<<" ans "<<bAns<<NL;
    cout<<aAns-bAns;


}


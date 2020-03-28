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
    map<string,int>m;
    map<string,int>::iterator it;
    m["C"]=1;
    m["C#"]=2;
    m["D"]=3;
    m["D#"]=4;
    m["E"]=5;
    m["F"]=6;
    m["F#"]=7;
    m["G"]=8;//g h e //E G H
    m["G#"]=9;
    m["A"]=10;
    m["B"]=11;
    m["H"]=0;

    string a,b,c,d,e,f,o,dui,t;
    cin>>a>>b>>c;
    o=a;dui=b;t=c;

    if(m[b]==(m[a]+4)%12 && (m[b]+3)%12==m[c])
    {
        cout<<"major";
        return 0;
    }
   else   if(m[b]==(m[a]+3)%13 && (m[b]+4)%13==m[c]) {
        cout<<"minor";
        return 0;
    }
     a=o;b=dui;c=t;
   d=b;e=c;f=a;
    a=d;b=e;c=f;

    if(m[b]==(m[a]+4)%12 && (m[b]+3)%12==m[c]) {
        cout<<"major";
        return 0;
    }
   else   if(m[b]==(m[a]+3)%12 && (m[b]+4)%12==m[c]) {
        cout<<"minor";
        return 0;
    }


 a=o;b=dui;c=t;
   d=c;e=a;f=b;
   a=d;b=e;c=f;
  //  cout<<a<<b<<c<<endl;
   if(m[b]==(m[a]+4)%12 && (m[b]+3)%12==m[c]) {
        cout<<"major";
        return 0;
    }
   else   if(m[b]==(m[a]+3)%12 && (m[b]+4)%12==m[c]) {
        cout<<"minor";
        return 0;
    }

   a=o;b=dui;c=t;
   swap(a,b);
   //cout<<a<<" "<<b<<" "<<c<<endl;
    if(m[b]==(m[a]+4)%12 && (m[b]+3)%12==m[c]) {
        cout<<"major";
        return 0;
    }
   else   if(m[b]==(m[a]+3)%12 && (m[b]+4)%12==m[c]) {
        cout<<"minor";
        return 0;
    }

   a=o;b=dui;c=t;
   swap(b,c);
    if(m[b]==(m[a]+4)%12 && (m[b]+3)%12==m[c]) {
        cout<<"major";
        return 0;
    }
   else   if(m[b]==(m[a]+3)%12 && (m[b]+4)%12==m[c]) {
        cout<<"minor";
        return 0;
    }

   a=o;b=dui;c=t;
   swap(a,c);
    if(m[b]==(m[a]+4)%12 && (m[b]+3)%12==m[c]) {
        cout<<"major";
        return 0;
    }
   else   if(m[b]==(m[a]+3)%12 && (m[b]+4)%12==m[c]) {
        cout<<"minor";
        return 0;
    }



    else cout<<"strange";

}


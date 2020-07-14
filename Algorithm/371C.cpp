#include<bits/stdc++.h>
using namespace std;

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll          long long

vector<int>receipe(3);
ll b,s,c,bv,sv,cv,money;

bool binSearch(ll x)
{
    ll breadMoney= max( (ll)0, x*receipe[0]-b)*bv ;
    ll sausageMoney= max( (ll)0, x*receipe[1]-s )*sv ;
    ll cheeseMoney= max( (ll)0, x*receipe[2]-c)*cv ;

    return breadMoney+sausageMoney+cheeseMoney <= money;

}

int main()
{
    fast
    string ham;
    cin>>ham;
    cin>>b>>s>>c>>bv>>sv>>cv>>money;

    for(int i=0;i<ham.size();i++)
    {
        if(ham[i]=='B')receipe[0]++;
        else if(ham[i]=='S')receipe[1]++;
        else receipe[2]++;
    }

    //let we will make x unit hamburger
    ll left=0,right=1e15,mid,ans=0;

    while(left<=right)
    {
        mid=(left+right)/2;
        //cout<<left<<" "<<mid<<" "<<right<<"\n";

        if(binSearch(mid))
        {
            ans=mid;
            left=mid+1;
        }
        else
            right=mid-1;
    }

    cout<<ans;
}

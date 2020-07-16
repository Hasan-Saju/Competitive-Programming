#include<bits/stdc++.h>
using namespace std;

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define SP(x)       fixed<<setprecision(x)

vector<double>v;
int n,k;

bool check(double mid)
{
    double red=0,inc=0;                 //reduce increase
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>=mid)
            red+=(v[i]-mid)*((double)(100-k)/100);
        else
            inc+= (mid-v[i]);
    }
    //cout<<red<<" "<<inc<<"\n";
    if(red>=inc)return true;
    else return false;
}

int main()
{

    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        double x;
        cin>>x;
        v.emplace_back(x);
    }

    double left=0,right=1009,ans=0,x=right;
    while(x--)
    {
        double mid=(left+right)/2;
       // cout<<left<<" "<<mid<<" "<<right<<"\n";
        if(check(mid))
        {
            left=mid;
            ans=mid;
        }
        else
        {
            right=mid;
        }
    }

    cout<<SP(9)<<ans;


}

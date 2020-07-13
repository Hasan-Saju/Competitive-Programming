#include<bits/stdc++.h>
using namespace std;

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;

        int stop= (2*n)+p;

        int kount=0;
        bool flag=false;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                ++kount;
                cout<<i<<" "<<j<<"\n";
                if(kount==stop)
                {
                    flag=true;
                    break;
                }
            }
            if(flag)break;
        }


    }
}

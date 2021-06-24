#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        vector <int> v;
        long long sum=0;

        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;

            v.push_back(x);
            sum+=x;
        }
        int avg = sum/n;
        int ans=0;
        if(sum%n!=0)
            cout<<"-1\n";
        else
        {
            for(int j=0; j<n; j++)
            {
                if(v[j]>avg)
                    ans++;
            }
            cout<<ans<<"\n";
        }
    }
}

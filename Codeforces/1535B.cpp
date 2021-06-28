#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;

        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        vector<int>org,odd;
        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0)
            {
                org.push_back(v[i]);
            }
            else
            {
                odd.push_back(v[i]);
            }

        }
        org.insert(org.end(),odd.begin(),odd.end());

        int kount=0;

//        for(auto x:org )
//        {
//            cout<<x<<" ";
//        }

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(gcd(org[i],2*org[j])>1)
                    kount++;
            }
        }
        cout<<kount<<"\n";

    }
}

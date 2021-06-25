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
        int sum=0;

        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            sum+=x;
        }
        if(sum>n)
            cout<<sum-n<<"\n";
        else if(sum==n)
            cout<<"0\n";
        else
            cout<<"1\n";
    }
}

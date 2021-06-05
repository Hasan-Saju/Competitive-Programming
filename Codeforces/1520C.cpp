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

        if(n==1)
            cout<<n<<"\n";
        else if(n==2)
            cout<<"-1\n";
        else
        {
            int limit=n*n;
            int val=1;

            for(int k=0; k<n; k++)
            {
                for(int l=0; l<n; l++)
                {
                    cout<<val<<" ";
                    val+=2;
                    if(val>limit)val=2;
                }
                cout<<"\n";
            }
        }
    }

}

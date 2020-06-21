#include<bits/stdc++.h>
using namespace std;

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define NL          "\n"


int main()
{
    fast
    int test;
    cin>>test;
    while(test--)
    {
        vector<int> ev,od;
        int n;
        cin>>n;

        for(int i=1;i<=2*n;i++)
        {
            int a;
            cin>>a;
            if(a%2==0)
                ev.push_back(i);
            else
                od.push_back(i);
        }

        int step=0,flag=0;
        for(int i=0; i<ev.size()-1 and ev.size()>=2 ; i+=2)
        {
            cout<<ev[i]<<" "<<ev[i+1]<<NL;
            step++;
            if(step==n-1)
            {
                flag=1;
                break;
            }
        }

        for(int i=0; i<od.size()-1 and flag==0 and od.size()>=2; i+=2)
        {
            cout<<od[i]<<" "<<od[i+1]<<NL;
            step++;
            if(step==n-1)
                break;
        }


    }

}


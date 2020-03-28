#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t;
    cin>>t;

    for(i=0; i<t; i++)
    {

        int n,m,k,j,komaiteHobe,diff,ok=0;
        cin>>n>>m>>k;

        int ara[n];
        cin>>ara[0];

        for(j=1; j<n; j++)
        {
            cin>>ara[j];
        }
        //sort(ara,ara+n);
        for(j=1; j<n; j++)
        {

            diff=abs(ara[j]-ara[j-1]);
            if(diff<=k)
            {
                ok=0;
              //  if(diff<k)
                    m=m+k-diff;
            }

            else
            {
                komaiteHobe=diff-k;
                if(m>=komaiteHobe)
                    m=m-komaiteHobe;
                else if(komaiteHobe>m)
                {
                    ok=1;
                    break;
                }
            }
        }
        if(ok)
            cout<<"nO"<<endl;
        else
            cout<<"yEs"<<endl;

    }

}

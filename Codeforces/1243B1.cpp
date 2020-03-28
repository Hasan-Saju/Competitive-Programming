#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,x,i,kount,j;
    int sc[2],tc[2];
    cin>>t;
    for(j=0; j<t; j++)
    {
        string s,t;
        cin>>n>>s>>t;
        kount=0;
        x=0;
        memset(sc,0,sizeof(sc));
        memset(tc,0,sizeof(tc));

        x=0;

        for(i=0; i<n; i++)
        {
            if(s[i]!=t[i])
            {
                kount++;
                if(kount>2)
                {
                    goto label;
                }
                sc[x]=s[i];
                tc[x]=t[i];
                x++;
            }
        }
        if(kount==2&&(sc[0]==sc[1])&&(tc[0]==tc[1]))
            cout<<"Yes"<<endl;
            else label: cout<<"No"<<endl;
    }
}

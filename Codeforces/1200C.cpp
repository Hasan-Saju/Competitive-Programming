#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,q,v1,v2,o1,o2,halfn,halfm,i,s1,s2,e1,e2;
    cin>>n>>m>>q;
    halfn=n/2;
    halfm=m/2;

    for(i=0; i<q; i++)
    {
        cin>>s1>>s2>>e1>>e2;
        if(s1==2&&e1==1)
        {
            v1=e1;
            v2=e2;
            o1=s1;
            o2=s2;
        }
        else
            {
             v1=s1;
            v2=s2;
            o1=e1;
            o2=e2;
            }
//        cin>>v1>>v2>>o1>>o2;

        if(v1==o1)
        {
            if(v1==1)
            {
                if(v2<=halfn&&o2<=halfn)
                    cout<<"YES";
                else if(v2>halfn&&o2>halfn)
                    cout<<"YEs";
                    else cout<<"NO";
            }
           else if(v1==2)
            {
                if(v2<=halfm&&o2<=halfm)
                    cout<<"YES";
                else if(v2>halfm&&o2>halfm)
                    cout<<"YEs";
                    else cout<<"nO";
            }
        }
        else if(v2<=halfn&&o2<=halfm)
            cout<<"yEs"<<endl;
        else if(v2>halfn&&o2>halfm)
            cout<<"nO"<<endl;

        else
            cout<<"nO"<<endl;

    }



}

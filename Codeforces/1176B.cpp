#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,ek,dui,tin,x,total;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        ek=0,dui=0,tin=0,total=0;
        int bek=0,bdui=0;
        for(j=0;j<n;j++)
        {
            cin>>x;
            if(x%3==0)tin++;
            else if (x%3==2)dui++;
            else if(x%3==1)ek++;
        }
        total=tin+min(ek,dui);
        bek=ek-min(ek,dui);
        bdui=dui-min(ek,dui);
        if(bek>0)
        {
            total=total+(bek/3);
        }
        if(bdui>0)
        {
            total=total+(bdui/3);
        }

        cout<<total<<endl;
        //<<ek<<" "<<dui<<" "<<tin;
    }
}

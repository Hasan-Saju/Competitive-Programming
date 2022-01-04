#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,r,c,j;
    string s;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>r>>c;
        for(j=0;j<24;j++)
        {
            s=s+"LD";
        }
        s+="RRUU";
          cout<<s.size()<<endl<<s<<endl;
          s.clear();
    }

}

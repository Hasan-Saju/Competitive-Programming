#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
int main()
{
    int t,x,i,j,choto,ans=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>x;
            vec.push_back(x);
        }

        choto=999999999;
        ans=0;

        for(j=n-1;j>=0;j--)
        {
            if(vec[j]>choto)ans++;
            choto=min(vec[j],choto);
            //cout<<choto<<" ";

        }
        cout<<ans<<endl;
        vec.clear();





    }




}

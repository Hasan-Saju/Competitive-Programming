#include<bits/stdc++.h>
using namespace std;
//typedef push_back pb;
int main()
{
    int n,k,x,sum=0,i,temp=0,flag=0,part,kount=0;
    cin>>n>>k;
    vector<int>v;
    vector<int>ans;
    for(i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
        v.push_back(x);
    }
    if(sum%k!=0)cout<<"No";
    else
    {
        part=sum/k;
        for(i=0;i<n;i++)
        {
            temp+=v[i];
            kount++;

            if(temp==part)
            {
             ans.push_back(kount);
             temp=0;
             kount=0;
            }
            if(temp>part)
                flag=1;
        }

        if(flag)cout<<"No";
        else
        {
            cout<<"Yes"<<endl;
            for(i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        }


    }
}

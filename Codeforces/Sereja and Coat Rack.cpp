#include<bits/stdc++.h>
using namespace std;

int main()
{
    int people,fine,guest,earn=0,spend=0,x,extraMan,ans,i,sum=0;
    vector<int>hookList;
    vector<int>::iterator it;

    cin>>people>>fine;
    for(i=0;i<people;i++)
    {
        cin>>x;
        hookList.push_back(x);
    }
    sort(hookList.begin(),hookList.end());
    cin>>guest;

    if(guest<people){
        for(i=0;i<guest;i++)
    {
        earn=earn+hookList[i];
    }
    cout<<earn;
    }

    else
    {

    for(it=hookList.begin();it!=hookList.end();it++)
    {
        earn=earn+*it;
    }

    extraMan=abs(people-guest);
    spend=extraMan*fine;

    ans=earn-spend;

    cout<<ans;
    }
    //cout<<" "<<earn<<" "<<spend;

return 0;
}

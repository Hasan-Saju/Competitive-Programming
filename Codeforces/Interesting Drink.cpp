#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q,i,x,mini;
    cin>>n;

    vector<int> shop;
    vector<int>::iterator it;
    vector<int>::iterator it2;

    for(i=0;i<n;i++)
    {
        cin>>x;
        shop.push_back(x);
    }
    cin>>q;

    vector<int> coins;
    for(i=0;i<q;i++)
    {
        cin>>x;
        coins.push_back(x);
    }


    sort(shop.begin(),shop.end());
    it2=min(shop.begin(),shop.end());
    mini=*it2;


    for(i=0;i<q;i++)
    {
        if(coins[i]<mini)
            cout<<"0"<<endl;
        else
        {
            it=upper_bound(shop.begin(),shop.end(),coins[i]);
        cout/*<<*it<<" "*/<<distance(shop.begin(),it)<<endl;

        }


    }

}

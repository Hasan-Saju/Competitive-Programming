#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int>&a,const pair<int,int>&b)
{
    return a.second>b.second;
}

int main()
{
    vector<pair<int,int> >vec;
    int n,m,i,totalBox=0,extra,match=0;
   // cin>>n>>m;
    scanf("%d %d",&n,&m);

    int ara[m],ara2[m];

    for(i=0;i<m;i++)
    {
       // cin>>ara[i]>>ara2[i];
        scanf("%d %d",&ara[i],&ara2[i]);
        vec.push_back(make_pair(ara[i],ara2[i]));
    }

    sort(vec.begin(),vec.end(),sortbysec);

//        cout<<endl;

//      for(i=0;i<m;i++)
//      {
//          cout<<vec[i].first<<" "<<vec[i].second<<endl;
//      }

    for(i=0;i<m;i++)
    {
        totalBox=totalBox+vec[i].first;
        if(totalBox<=n)
        {
            match=match+(vec[i].first*vec[i].second);
            if(totalBox==n)break;
        }

        else if(totalBox>n)
        {
            extra=totalBox-n;
           match=match+((vec[i].first-extra)*vec[i].second);
           break;
        }

    }

   // cout<<match;
    printf("%d",match);



}

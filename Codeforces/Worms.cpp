#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>::iterator it;
    int i,n,m,x,sum=0;


    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        sum+=x;
        vec.push_back(sum);
    }


//    for(it=vec.begin();it!=vec.end();it++)
//        cout<<*it<<" ";
    scanf("%d",&m);
    int ara[m];

    for(i=0; i<m; i++)
        scanf("%d",&ara[i]);

    for(i=0; i<m; i++)
    {
        it=lower_bound(vec.begin(),vec.end(),ara[i]);
       // cout<<distance(vec.begin(),it)+1<<endl;
        printf("%d\n",distance(vec.begin(),it)+1);
    }

    return 0;



}

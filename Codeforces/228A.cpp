/* SHERA SOLVE

#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    set <int> a;
    for(int i=0;i<4;i++)
    {
        cin>>n;
        a.insert(n);
    }
    cout<<4-a.size();
}

*/




#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,j,kount=0;
    int ara[4];

    for(i=0;i<4;i++)
            cin>>ara[i];

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)j++;
            if(ara[i]==0)break;
            if(ara[i]==ara[j])
            {
                ara[j]=0;
                kount++;
            }
        }
        ara[i]=0;
    }
    cout<<kount;

}


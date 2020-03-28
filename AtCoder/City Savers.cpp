#include<bits/stdc++.h>
using namespace std;

long long mini(int a,int b)
{
    if(a<=b)return a;
    else return b;
}

int main()
{
    long long i,j,n,x,total_hero=0,total_mons=0,final_hero=0,choto=0;
    cin>>n;

    vector<int>mons;
    vector<int>hero;

    for(i=0;i<n+1;i++)
    {
        cin>>x;
        mons.push_back(x);
        total_mons=total_mons+x;

    }
    for(i=0;i<n;i++)
    {
        cin>>x;
        hero.push_back(x);
        total_hero+=x;
    }

    for(i=0;i<n;i++)
    {
        choto=mini(hero[i],mons[i]);
        hero[i]=hero[i]-choto;
        mons[i]=mons[i]-choto;

        choto=mini(hero[i],mons[i+1]);
        hero[i]=hero[i]-choto;
        mons[i+1]=mons[i+1]-choto;

    }

    for(i=0;i<n;i++)
    {

        final_hero+=hero[i];
    }
    cout<<total_hero-final_hero;

}

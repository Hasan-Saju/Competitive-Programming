#include<bits/stdc++.h>
using namespace std;

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ull unsigned long long

map<ull,ull>cube;

void Cube()
{
    for(ull i=1; i<=1000005; i++)
        cube[i*i*i]=i;
}

int main()
{
    fast
    Cube();

    ull t;
    cin>>t;
    while(t--)
    {
        ull a,b;
        cin>>a>>b;
        bool found=false;

        if(cube.find(a*b)==cube.end())
        {
            cout<<"No\n";
            continue;
        }

        ull cub= cube[a*b];

        if(cub*cub*cub == (a*b) and a%cub==0 and b%cub==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}



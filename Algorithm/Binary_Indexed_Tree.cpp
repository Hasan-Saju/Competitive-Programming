///Fenwick Tree / RMQ

#include<bits/stdc++.h>
using namespace std;

const int N=1000005;
int ara[N];
int tree[N];

int query(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+= tree[idx];
        idx-= ( idx &(-idx) );
    }
    return sum;
}

void update(int idx, int x, int n)          ///n is the size of the array and x= x plus korte hobe, idx index a
{
    while(idx<=n)
    {
        tree[idx]+=x;
        idx+=( idx & (-idx) );
    }
}
int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>ara[i];
        update(i,ara[i],n);
    }


}

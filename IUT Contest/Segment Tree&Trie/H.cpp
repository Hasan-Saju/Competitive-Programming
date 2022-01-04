#include<bits/stdc++.h>
using namespace std;
#define MX 100000
int arr[MX];
int tree[MX*3];

void update(int node, int b, int e, int i,int j,int neww)
{
    if(i>e||j<b)
        return ;
    if(b>=i&&e<=j)
    {
        tree[node]+=neww;
        return;
    }
    int left=node*2;
    int right=node*2+1;

    int mid=(b+e)/2;
    update(left,b,mid,i,j,neww);
    update(right,mid+1,e,i,j,neww);
    tree[node]=tree[left]+tree[right];
}


int query(int node, int b, int e, int i,int j)
{
     if(i>e||j<b)
        return 0;
    if(b>=i&&e<=j)
    {
    return   tree[node];

    }
    int left=node*2;
    int right=node*2+1;

    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return p1+p2;
}




int main()
{
    int n,q,f,x,y,v,ans;
    scanf("%d %d",&n,&q);

    for(int m=0;m<q;m++)
    {
        scanf("%d",&f);
        if(f==0)
        {
             scanf("%d %d %d",&x,&y,&v);
             update(1,1,n,x+1,y+1,v);

        for(int h=0;h<n*3;h++)
            printf("%d ",tree[h]);
printf("\n");
        }

        else

        {
            scanf("%d %d",&x,&y);
            int ans=query(1,1,n,x+1,y+1);
        }
        printf("%d\n",ans);
    }




}

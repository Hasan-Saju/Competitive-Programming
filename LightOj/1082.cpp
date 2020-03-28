#include<bits/stdc++.h>
using namespace std;
#define MX 100000
int arr[MX];
int tree[MX*3];

void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }

    int left = 2*node;
    int right=2*node+1;
    int mid=(b+e)/2;

    build(left,b,mid);
    build(right,mid+1,e);

    tree[node]=min(tree[left],tree[right]);



}

int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b)
        return MX;
    if(b>=i&&e<=j)
        return tree[node];


    int left = 2*node;
    int right=2*node+1;
    int mid=(b+e)/2;

    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);

    return min(p1,p2);

}






int main()
{
    int t;
    scanf("%d",&t);

    for(int w=0;w<t;w++)
    {
        printf("Case %d:\n",w+1);
        //cout<<"Case "<<w+1<<":"<<endl;

    int n,q,x;
   // cin>>n>>q;
    scanf("%d %d",&n,&q);
    for(int z=1;z<=n;z++)
    {
        //cin>>x;
        scanf("%d",&x);
        arr[z]=x;
    }
    build(1,1,n);

    for(int l=0;l<q;l++)
    {
        int p,q;

   // cin>>p>>q;
    scanf("%d %d",&p,&q);
  //  for(int z=0;z<=3*n;z++)cout<<tree[z]<<" ";

    int  ans=query(1,1,n,p,q);
   // cout<<ans<<endl;
    printf("%d\n",ans);

    }

}
}

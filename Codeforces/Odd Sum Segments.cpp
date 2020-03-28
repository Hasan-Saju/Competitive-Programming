#include<bits/stdc++.h>
using namespace std;


int main()
{
    int q,z,i,x,k;
    //cin>>q;
    scanf("%d",&q);
    for(z=0; z<q; z++)
    {
        int n,k;
        //cin>>n>>k;
        scanf("%d %d",&n,&k);
        vector<int>vec;


        for(i=1; i<n+1; i++)
        {
            //cin>>x;
            scanf("%d",&x);
            if(x%2!=0)
                vec.push_back(i);
        }

        if(vec.size()>=k&&((vec.size()-k)%2==0))//Shobar jonno ekta odd number and extra odd gula duita kore pair kore even banay felsi
        {
            //cout<<"YES"<<endl;
            printf("YES\n");

            for(i=0; i<k-1; i++)
            {
                //cout<<vec[i]<<" ";
                printf("%d ",vec[i]);
            }
           // cout<<n<<endl;
            printf("%d\n",n);
        }
        else
            //cout<<"NO"<<endl;
            printf("NO\n");



    }

    return 0;
}

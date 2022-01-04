#include<bits/stdc++.h>
using namespace std;
vector<int>vec;

int main()

{
    int t,n,kount=0,j,i,x,z,k;
    cin>>t;

    for(z=0;z<t;z++)
    {
        kount=0;

        cin>>n;
        for(j=0;j<n;j++)
        {

            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());

        for(i=0;i<n;i++)
        {
            for(j=0;j!=i,j<n;j++)
            {
                for(k=0;k!=i&&k!=j,k<n;k++)
                {

                    if(vec[k]<vec[j]+vec[i])kount++;

                }


            }
            //if(vec[i-1]+vec[i]>vec[i+1])kount++;
        }
        cout<<"Case #"<<z+1<<": "<<kount<<endl;


    }





}

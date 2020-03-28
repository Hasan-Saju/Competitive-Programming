#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,i,j,k,big=0,x,kount=0;
    cin>>n;
    vector <int>vec;

    vec.push_back(3000);
    for(i=0; i<n; i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    vec.push_back(3000);


    for(i=j,j=1,k=j; j<n+1;j++)
    {
        kount=0;
        i=j;
        k=j;
        while(1)
        {
            if(i<0)break;
            if(vec[i-1]<=vec[i])
            {
                kount++;

            }
            else break;

            i--;

        }


        while(1)
        {
            if(k>n+1)break;
             if(vec[k+1]<=vec[k])
            {
                kount++;

            }
            else break;
            k++;
        }
    if(kount>big)big=kount;
   // cout<<kount;

    }
    cout<<big+1;

}

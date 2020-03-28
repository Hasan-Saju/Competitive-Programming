#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,M,i,sum=0,j,x,temp;
    cin>>n>>M;
    vector<int>vec;
        vector<int>data;
    vector<int>as;
    for(i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
        vec.push_back(sum);
        data.push_back(x);
        //as.push_back(x);
    }

    for(i=0;i<n;i++)
    {
      if(i!=0) as.push_back(data[i-1]);

        if(vec[i]<=M)cout<<"0"<<" ";
      //if(vec[i]<=M)cout<<"0."<<vec[i]<<" ";
        else
            {
                j=0;
             sort(as.begin(),as.end(),greater<int>());

             temp=vec[i];
             while(temp>M)
             {
              temp=temp-as[j];
              j++;
             }
          cout<<j<<" ";
            // cout<<j<<"."<<temp<<" ";
            }
    }

}

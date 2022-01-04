#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
vector<int>sortt;


int main()
{
    vector<int>::iterator it;


    int n,i,j,x;
    scanf("%d",&n);




    for(i=0; i<n; i++)
    {
        cin>>x;
        vec.push_back(x);
    }

    j=0;

    sortt.assign(vec.begin(),vec.end());

    for(i=0; i<n-1; i++)
    {


        it=upper_bound(sortt.begin()+i+1,sortt.end(),vec[i]);

        x=*it;
        // cout<<x<<"   ";
        if(x>vec[i])
            cout<<x<<" ";
        else
            cout<<"-1"<<" ";


    }

    cout<<"-1";

}


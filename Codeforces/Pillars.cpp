#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,l,r,x,no=0,mid,mid1,mid2,order=0;
    vector<int>vec;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>x;
        vec.push_back(x);
    }

    for(i=1; i<n; i++)
    {
        if(vec[i]<vec[i+1])
        {
            order=1;
        }
        else
        {
            order=0;
            break;
        }
    }
    if(order)
        goto label;

    for(i=n; i>1; i--)
    {
        if(vec[i-1]>vec[i])
        {
            order=1;
        }
        else
        {
            order=0;
            break;
        }
    }
    if(order)
        goto label;
    if(n%2!=0)
    {
        mid=((n-1)/2)+1;
        for(l=mid-1,r=mid-1;; l--,r++)
        {
            //      cout<<vec[l-1]<<" "<<vec[l]<<" "<<vec[r]<<" "<<vec[r+1]<<"vitore dhuke nai";
            if(vec[l-1]>=vec[l]||vec[r]<=vec[r+1])
            {
                no=1;
                //        cout<<vec[l-1]<<" "<<vec[l]<<" "<<vec[r]<<" "<<vec[r+1];
                break;

            }
            if(l==2||r==n-1)
                break;
        }
    }
    else
    {
        mid1=n/2;
        mid2=mid1+1;

        for(l=mid1-1;; l--)
        {
            // cout<<vec[l-1]<<" "<<vec[l]<<" "<<"dhukse "<<endl;

            if(vec[l-1]>=vec[l])
            {
                no=1;

                break;
            }
            if(l==2-1)
                break;

        }

        for(r=mid2-1;; r++)
        {
            //cout<<"dhukse r "<<vec[r]<<" "<<vec[r+1]<<endl;
            if(vec[r]<=vec[r+1])
            {
                no=1;


                break;
            }
            if(r==n-1-1)
                break;

        }

    }
    if(no)
        cout<<"nO";
    else
        cout<<"yEs";

    return 0;

label:
    if(order)
        cout<<"yeS";
    else
        cout<<"No";

    return 0;
}

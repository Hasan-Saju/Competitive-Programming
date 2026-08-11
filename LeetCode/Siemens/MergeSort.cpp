#include<bits/stdc++.h>
using namespace std;

void mergee(vector<int>& v, int l, int mid, int r)
{
    int n1=mid-l+1;
    int n2=r - mid;

    vector<int>left(n1);
    vector<int>right(n2);

    for(int i=0; i<n1; i++)
        left[i] = v[l+i];
    for(int j=0; j<n2; j++)
        right[j] = v[mid+1+j];

    int i=0, j=0, k=l;

    while(i<n1 and j<n2)
    {
        if(left[i]<=right[j])
        {
            v[k] = left[i];
            i++;
        }
        else
        {
            v[k] = right[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        v[k] = left[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        v[k] = right[j];
        j++;
        k++;
    }
}

void mergesort(vector<int>& v, int l, int r)
{
    if(l>=r)
        return;

    int mid = l+(r-l)/2;
    mergesort(v, l, mid);
    mergesort(v, mid+1, r);

    mergee(v,l,mid,r);
}

int main()
{
    vector<int> v = {4,7,2,1,9,6};
    int sz = v.size();
    mergesort(v, 0, sz-1);

    for(auto x:v)
        cout<<x<<" ";
}

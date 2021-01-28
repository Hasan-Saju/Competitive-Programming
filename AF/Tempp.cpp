#include<bits/stdc++.h>
using namespace std;
int arr[] ={1,-5,69,5,5,5,1,1,1,3,3,1,1,1};

int main()
{
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_map<int, int> hash;
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }

    for(auto i:hash)
    {
        if(i.second>n/2)
            cout<<i.first;
    }
    return 0;
}

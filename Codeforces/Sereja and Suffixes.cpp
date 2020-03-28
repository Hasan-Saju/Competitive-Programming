#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    bool check;
    vector<int> target;
    vector<int> index;

    cin>>x;
    target.push_back(x);

    for(i=1; i<n; i++)
    {

        check=binary_search(target.begin(),target.end(),x);
        if(check==false)
        {
            target.push_back(x);
            sort(target.begin(),target.end());
        }

        cin>>x;

    }
    sort(target.begin(),target.end());

    cin>>m;

    for(i=0; i<m; i++)
    {
        cin>>x;
        index.push_back(x);
    }

    for(i=0;i<m;i++)
    {
        distance()


    }








}

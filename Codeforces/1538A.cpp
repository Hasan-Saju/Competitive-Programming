#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>v;
        int first,last;

        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;

            if(x==1)
                first = j+1;
            else if(x==n)
                last = j+1;

        }

        int from_first = max(first,last);
        int from_last = max(n-first+1, n-last+1);

        int one_side = first + (n-last+1);
        int another_side = last + (n-first+1);

        //cout<<from_first<<" "<<from_last<<" "<<one_side<<" "<<another_side<<"\n";

        cout<<min (min(from_first,from_last),min(one_side,another_side) )<<"\n";

    }
}

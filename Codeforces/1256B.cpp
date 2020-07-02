#include<bits/stdc++.h>
using namespace std;

#define NL          "\n"
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        vector<int>v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            --v[i];
        }

        int pos=0;
        while(pos<n)
        {
            int nxt=min_element(v.begin()+pos,v.end())-v.begin();
            int element=v[nxt];

            v.erase(v.begin()+nxt);
            v.insert(v.begin()+pos,element);

            if(pos==nxt)
                pos=nxt+1;
            else
                pos=nxt;
        }

        for(auto x:v )
            cout<<++x<<" ";
        cout<<NL;

    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ca = a, cb = b, cc = c;
    stack<int> st;
    while(a>0 or b>0 or c>0)
    {
        int kount = 0;
        kount += a & 1, kount += b & 1, kount += c & 1;
        a = a>>1, b = b>>1, c = c>>1;

        if(kount>1)
            st.push(0);
        else
            st.push(1);

        //cout<<a<<" "<<b<<" "<<c<<"\n";
    }

    int x = 0;
    while(!st.empty())
    {
        x = x<<1;
        x += st.top();
        st.pop();
        //cout<<x<<" ";
    }
    //cout<<"xor"<<x<<"\n";

    int result = (ca^x) + (cb^x) + (cc^x);
    cout<<result;
}

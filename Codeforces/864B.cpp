#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxlen,i;
    char c;
    cin>>n;
    set<char>s;
    vector<int>vec;
    for(i=0; i<n; i++)
    {
        cin>>c;
        if(c>='a'&&c<='z')
        {
            s.insert(c);
        }
        else if(c>='A'&&c<='Z')
        {
            vec.push_back(s.size());
           // cout<<s.size()<<endl;
            s.clear();
        }
    }
    vec.push_back(s.size());
   // cout<<s.size()<<endl;
    s.clear();

    maxlen=*max_element(vec.begin(),vec.end());
    cout<<maxlen;
}

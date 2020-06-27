#include<bits/stdc++.h>
using namespace std;

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

vector<int> createLPS(string pattern)
{
    vector<int>lps(pattern.size());
    int index=0;
    for(int i=1; i<pattern.size(); )
    {
        if(pattern[index]==pattern[i])
        {
            lps[i]=index+1;
            ++index, ++i;
        }
        else
        {
            if(index!=0)
                index=lps[index-1];
            else
                lps[i]=index, ++i;
        }
    }
    return lps;
}

void kmp(string text, string pattern)
{
    bool found=false;
    vector<int>lps=createLPS(pattern);
    vector<int>ans;
    int i=0,j=0;
    //i-> text ; j-> pattern
    while(i<text.size())
    {
        if(text[i]==pattern[j])
        {
            ++i,++j;
        }
        else
        {
            if(j!=0)
                j=lps[j-1];
            else
                ++i;
        }

        if(j==pattern.size())
        {
            found=true;
            // cout<<"found match at: "<<i-pattern.size()+1<<endl;
            ans.push_back(i-pattern.size()+1);
            j=lps[j-1];
        }
    }
    if(!found)
        cout<<"Not Found\n\n";
    else
    {
        cout<<ans.size()<<"\n";
        for(auto x: ans )
        cout<<x<<" ";
        cout<<"\n\n";
    }

}

int main()
{
    fast
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        string text, pattern;
        cin>>text>>pattern;

        kmp(text,pattern);
    }

}


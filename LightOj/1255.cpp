#include<bits/stdc++.h>
using namespace std;

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

int kmp(string text, string pattern)
{
    int ans=0;
    bool found=false;
    vector<int>lps=createLPS(pattern);
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
            ++ans;
            found=true;
            // cout<<"found match at: "<<i-pattern.size()+1<<endl;
            //break;
            //for multiple occurrance
            j=lps[j-1];
        }
    }
    return ans;
}

int main()
{
    int test=0;
    scanf("%d",&test);
    for(int j=1;j<=test;j++)
    {
        string text, pattern;
        //scanf(" %s %s",text,pattern);
        cin>>text>>pattern;

        int ans=kmp(text,pattern);
        printf("Case %d: %d\n",j,ans);
    }

}


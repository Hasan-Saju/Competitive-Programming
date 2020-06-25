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

    }
    return j;
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int j=1; j<=t; j++)
    {
        string pattern,text;
        cin>>text;
        pattern=text;
        reverse(pattern.begin(),pattern.end());
       // cout<<pattern<<" "<<text.size()<<endl;

        int h_match=kmp(text,pattern);
        int ans=2*text.size()-h_match;

        //cout<<h_match<<endl;
        printf("Case %d: %d\n",j,ans);
    }

}

//P : anncbaaababaaa|||||
//Q : |||||aaababaaabcnna


//P: sadaaaaa

//Q: aaaaadas

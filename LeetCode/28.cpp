#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

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
        int result=0;
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
                found=true;
                cout<<"found match at: "<<i-pattern.size()+1<<endl;
                result = i-pattern.size();
                break;
                //for multiple occurrance
                //j=lps[j-1];
            }
        }
        if(!found)
        {
            result=-1;
            cout<<"Not found\n";
        }
        if(pattern.size()==0)
            result=0;

        cout<<result<<"\n";
        return result;
    }


    int strStr(string haystack, string needle)
    {
        return kmp(haystack,needle);
    }


};

int main()
{
    Solution obj;

    string haystack="aaaaba";
    string needle="aab";
    obj.strStr(haystack,needle);
}


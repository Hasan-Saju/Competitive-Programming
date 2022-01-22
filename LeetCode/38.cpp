#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string countAndSay(int n)
    {
        if(n==1)
            return "1";
        else
        {
            string x=countAndSay(n-1);
            char temp = x[0];
            int kount = 0;
            string res = "";

            for(int i=0; i<x.size(); i++)
            {
                if(temp==x[i])
                    kount++;
                else
                {
                    res+= to_string(kount)+temp;
                    temp = x[i];
                    kount=1;
                }
            }
            res+= to_string(kount)+temp;
            return res;
        }
    }
};

int main()
{
    Solution obj;
    int n=10;
    string ans=obj.countAndSay(n);
    cout<<ans;
}



#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        string res = "", temp="";
        for(int x=1; x<=min(str1.size(), str2.size()); x++)
        {
            temp+=str1[x-1];
            if(str1.size()%x==0 and str2.size()%x==0)
            {
                int k1 = str1.size()/x;
                int k2 = str2.size()/x;

                string r1="", r2="";
                for(int i=0; i<k1; i++)
                    r1+=temp;
                for(int i=0; i<k2; i++)
                    r2+=temp;

                if(r1==str1 and r2==str2)
                    res = temp;
            }
        }

        return res;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.gcdOfStrings("ABABAB", "ABAB");
}


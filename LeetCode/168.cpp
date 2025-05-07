#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string ans="";
        while(columnNumber>0)
        {
            int temp = columnNumber%26;
            if(temp==0)
            {
                temp = 26;
                columnNumber-=1;
            }
            char ch = 'A'+temp-1;
            ans+=ch;
            columnNumber/=26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.convertToTitle(26);
}


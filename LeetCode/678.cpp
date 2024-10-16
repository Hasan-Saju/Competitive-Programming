#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkValidString(string s)
    {
        int leftMax = 0, leftMin = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
                leftMax++, leftMin++;
            else if(s[i]==')')
                leftMax--, leftMin = max(0, leftMin-1);
            else
                leftMax++, leftMin = max(0, leftMin-1);

            if(leftMax<0)
                return false;
        }
        return leftMin==0? true:false;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    string s = "***)))  ((";
    cout<<obj.checkValidString(s);
}

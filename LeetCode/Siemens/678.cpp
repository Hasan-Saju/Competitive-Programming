#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkValidString(string s)
    {
        stack<char>left, star;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
                left.push(i);
            else if(s[i]=='*')
                star.push(i);
            else
            {
                if(left.empty() and star.empty())
                    return false;
                else if(!left.empty())
                    left.pop();
                else
                    star.pop();
            }
        }

        //cout<<left.size()<<endl;

        while(left.size() and star.size())
        {
            if(left.top()>star.top())
                return false;
            left.pop();
            star.pop();
        }

        return left.empty();
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.checkValidString("(*)");
}

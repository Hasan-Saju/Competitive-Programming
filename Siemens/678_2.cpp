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
            char c = s[i];

            if(c=='(')
                left.push(i);
            else if(c=='*')
                star.push(i);
            else
            {
                if(left.empty() and star.empty())
                    return false;
                else if(!left.empty())
                    left.pop();
                else if(!star.empty())
                    star.pop();
            }
        }

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
    obj.checkValidString("(*))");
}

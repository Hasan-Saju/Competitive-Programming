#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canReach(string s, int minJump, int maxJump)
    {
        queue<int>q;
        q.push(0);
        int endd = s.size()-1;
        bool res=false;
        int lastRange = 0;

        while(!q.empty())
        {
            int f = q.front();
            q.pop();


            for(int i=max(f+minJump,lastRange); i<s.size() and i<=f+maxJump; i++)
            {
                if(s[i]=='0')
                {
                    if(i==endd)
                    {
                        res = true;
                        break;
                    }
                    q.push(i);
                }
            }
            lastRange = f+maxJump+1;
            if(res)
                break;

        }
        return res;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.canReach("01101110",2,3);
}


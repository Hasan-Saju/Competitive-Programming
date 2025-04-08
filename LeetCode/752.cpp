#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<string> children(string s)
    {
        vector<string>child;
        for(int i=0; i<4; i++)
        {
            string lock = s;
            lock[i] = (lock[i]-'0'+1)%10 + '0';
            child.push_back(lock);

            lock = s;
            lock[i] = (lock[i]-'0'-1+10)%10 + '0';
            child.push_back(lock);
        }
        return child;
    }
public:
    int openLock(vector<string>& deadends, string target)
    {
        unordered_set<string>vis(deadends.begin(), deadends.end());
        if(vis.count("0000"))
            return -1;
        queue<pair<string,int>>Q;
        Q.push({"0000",0});

        while(!Q.empty())
        {
            auto [pattern, turns] = Q.front();
            Q.pop();

            if(pattern == target)
                return turns;
            for(auto x:children(pattern))
            {
                if(!vis.count(x))
                {
                    vis.insert(x);
                    Q.push({x, turns+1});
                }
            }
        }
        return -1;
    }
};
int main()
{
    Solution obj;
    vector<string>vec = {"0201","0101","0102","1212","2002"};
    cout<<obj.openLock(vec, "0202");
}


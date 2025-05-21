#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestDiverseString(int a, int b, int c)
    {
        priority_queue<pair<int, char>>pq;
        if(a>0)pq.push({a, 'a'});
        if(b>0)pq.push({b, 'b'});
        if(c>0)pq.push({c, 'c'});

        string res="";
        while(!pq.empty())
        {
            cout<<res<<" \n";
            auto temp = pq.top();
            pq.pop();
            int len = res.size();
            if(len>1 and res[len-1]==res[len-2] and res[len-1]==temp.second)
            {
                if(pq.empty())
                    break;
                auto temp2 = pq.top();
                pq.pop();

                res+=temp2.second;
                int val = temp2.first-1;

                if(val>0)
                    pq.push({val, temp2.second});
            }
            else
            {
                res+=temp.second;
                temp.first = temp.first-1;
            }

            if(temp.first)
                pq.push({temp.first, temp.second});

        }
        return res;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.longestDiverseString(1,1,7);
}


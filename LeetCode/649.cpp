#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string predictPartyVictory(string senate)
    {
        int totalR=0, totalD=0;
        queue<char>pipe;
        for(auto c:senate)
        {
            if(c=='R')
                totalR++;
            else
                totalD++;

            pipe.push(c);
        }

        int d_now=0, r_now=0;
        while(!pipe.empty())
        {
            auto c = pipe.front();
            pipe.pop();

            if(c=='D')
                totalD--;
            else totalR--;

            if(c=='R' and d_now==0)
            {
                r_now++;
                pipe.push(c);
                totalR++;
            }
            else if(c=='D' and r_now==0)
            {
                d_now++;
                pipe.push(c);
                totalD++;
            }
            else if(c=='R')
            {
                d_now--;
                d_now = max(d_now,0);
            }
            else if(c=='D')
            {
                r_now--;
                r_now = max(r_now,0);
            }

            if(!totalD or !totalR)
                break;
        }

        return totalD>totalR ? "Dire":"Radiant";
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.predictPartyVictory("RD");
}

//Simulate with RDDRD
//main hacks immediate porer take neutralize korte hobe, then finally check korte hobe who wins


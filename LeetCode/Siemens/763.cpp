#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        vector<int>start(26,-1);
        vector<int>endd(26,-1);

        for(int i=0; i<s.size(); i++)
        {
            if(start[s[i]-'a']==-1)
                start[s[i]-'a'] = i;

            endd[s[i]-'a'] = i;
        }

        vector<vector<int>>intervals;
        for(int i=0; i<26; i++)
        {
            if(start[i]!=-1)
            {
                vector<int>tmp = {start[i], endd[i]};
                intervals.push_back(tmp);
            }
        }

        sort(intervals.begin(), intervals.end());
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);

        for(int i=1; i<intervals.size(); i++)
        {
            if(intervals[i][0]>ans.back()[1])
                ans.push_back(intervals[i]);
            else if(intervals[i][0]<ans.back()[1] and intervals[i][1]>ans.back()[1])
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            else
                continue;
        }

        vector<int>result;
        for(auto x: ans)
            result.push_back(x[1]-x[0]+1);


        return result;

    }
};



int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    string s = "ababcbacadefegdehijhklij";
    obj.partitionLabels(s);
}

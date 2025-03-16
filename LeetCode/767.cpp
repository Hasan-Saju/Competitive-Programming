#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reorganizeString(string s)
    {
        priority_queue<pair<int, int>>pq;
        int total = s.size();
        map<int, int>mp;
        for(auto c:s)
            mp[c-'a']++;
        for(auto ele:mp)
            pq.push({ele.second, ele.first});

        string ans="";
        while(total and !pq.empty())
        {
            auto f = pq.top();
            pq.pop();

            if(f.first>1 and pq.empty())
                return "";
            else if(f.first==1 and pq.empty())
            {
                ans += (f.second+'a');
                return ans;
            }
            auto s = pq.top();
            pq.pop();

            cout<<f.second<<" "<<s.second<<" fs\n";

            ans += (f.second+'a');
            ans += (s.second+'a');
            total-=2;

            if(f.first>1)
                pq.push({f.first-1, f.second});
            if(s.first>1)
                pq.push({s.first-1, s.second});

            cout<<ans<<" \n";
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.reorganizeString("aab");
}


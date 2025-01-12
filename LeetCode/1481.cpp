#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int>mp;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(auto x:arr)
            mp[x]++;

        for(auto ele:mp)
            pq.push({ele.second, ele.first});

        while(k)
        {
            auto temp = pq.top();
            cout<<temp.first<<" "<<temp.second<<"\n";
            if(temp.first<=k)
            {
                pq.pop();
                k-=temp.first;
            }
            else
                break;
        }

        return pq.size();
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,1,1,3,3,3};
    cout<<obj.findLeastNumOfUniqueInts(vec,3);
}


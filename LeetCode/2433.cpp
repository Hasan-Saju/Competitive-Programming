#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int sizee = pref.size();
        vector<int>result(sizee);
        result[0] = pref[0];
        int calc = pref[0];
        for(int i=1; i<pref.size(); i++)
        {
            result[i] = calc ^ pref[i];
            calc = calc ^ result[i];
            cout<<result[i]<<" "<<result[i-1]<<" "<<pref[i]<<"\n";
        }

        return result;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {5, 2, 0, 3, 1};
    vector<int>ans;
    ans = obj.findArray(vec);

    for(auto x: ans)
    {
        cout<<x<<" ";
    }
}



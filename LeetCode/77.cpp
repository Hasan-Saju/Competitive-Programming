#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<vector<int>>res;
    void recurse(int ind,int k, vector<int>& temp, vector<int>& v)
    {
        if(ind>v.size())
            return;
        else if(temp.size()==k)
        {
            res.push_back(temp);
            for(auto x:temp)
                cout<<x<<" ";
            cout<<"\n";

            return;
        }

        for(int i=ind; i<v.size(); i++)
        {
            temp.push_back(v[i]);
            recurse(i+1, k, temp,v);

            temp.pop_back();
        }
        return;
    }
public:
    vector<vector<int>> combine(int n, int k)
    {
        vector<int>v;
        for(int i=1; i<=n; i++)
            v.push_back(i);

        vector<int>temp;
        recurse(0, k, temp, v);
        return res;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.combine(1,1);
}


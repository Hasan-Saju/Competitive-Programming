#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    float distancee(int x, int y)
    {
        float dist = sqrt(x*x + y*y);
        cout<<dist<<" in fn \n";
        return dist;
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k)
    {
        multimap<float, vector<int> >mp;

        for(auto v:points)
        {
            cout<<v[0]<<" "<<v[1]<<"\n";
            float d = distancee(v[0], v[1]);
            cout<<d<<" d\n";
            mp.insert({d, v});
        }

        vector<vector<int>> ans;
        int i=1;
        for(auto x: mp)
        {
            ans.push_back(x.second);
            i++;
            if(i>k)
                break;
        }

        cout<<"ans \n";
        for(auto x:ans)
        {
            for(auto y:x)
            {
                cout<<y<<" ";
            }
            cout<<"\n";
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<vector<int> >vec{{3,3}, {5,-1}, {-2,4}};
    obj.kClosest(vec,2);
}


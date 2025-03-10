#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static bool cmp(const tuple<int, int, int>& t1, const tuple<int, int, int>& t2)
    {
        return get<0>(t1) >= get<0>(t2);
    }
    int twoCitySchedCost(vector<vector<int>>& costs)
    {
        vector<tuple<int, int, int>>V;
        for(auto vec:costs)
            V.push_back({abs(vec[0]-vec[1]), vec[0], vec[1]});

        sort(V.begin(), V.end(), cmp);

        int first=0, second=0, target = costs.size()/2;
        int sum=0;
        for(auto v:V)
        {
            if((get<1>(v) <= get<2>(v) and first<target) or (second>=target))
            {
                cout<<get<1>(v)<<"f\n";
                sum+=get<1>(v);
                first++;
            }
            else
            {
                cout<<get<2>(v)<<"s\n";
                sum+=get<2>(v);
                second++;
            }
            cout<<first<<" "<<second<<" "<<target<<"\n";
        }

        return sum;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>>vec = {{259,770},{448,54},{926,667},{184,139},{840,118},{577,469}};
    cout<<obj.twoCitySchedCost(vec);
}

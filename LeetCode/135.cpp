#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int candy(vector<int>& ratings)
    {
        vector<int>score(ratings.size(),1);
        int mx = INT_MAX;
        int ind=0;
        for(int i=1; i<ratings.size(); i++)
        {
            if(ratings[i]>ratings[i-1])
                score[i] = score[i-1]+1;
        }

        for(int i=ratings.size()-2; i>=0; i--)
        {
            if(ratings[i]>ratings[i+1])
                score[i] = max(score[i], score[i+1]+1);
        }

        int res=0;
        for(auto val:score)
            res+=val;

        return res;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,3,2,2,1};
    cout<<obj.candy(vec);
}





#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m=matrix.size();
        //int n=matrix[0].size();
        priority_queue<int > pq;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                pq.push(matrix[i][j]);
                if(pq.size()>k)
                   {
                       cout<<pq.top()<<"\n";
                       pq.pop();
                   }
            }
        }
        cout<<pq.top();
        return pq.top();
    }
};

int main()
{
    Solution obj;
    //vector<int>vec = {2,7,11,15};
    vector<vector<int>>vect
    {
        {1,2},
        {1,3}
    };
    obj.kthSmallest(vect,2);
}

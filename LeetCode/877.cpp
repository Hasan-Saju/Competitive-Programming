#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    bool recurse(int left, int right, int scoreDiff, vector<int>& piles)
    {
        if(left>right)
            return scoreDiff>0;
        if((left+right)%2==0)
            return recurse(left+1, right, scoreDiff+piles[left], piles) || recurse(left, right-1, scoreDiff+piles[right], piles);
        else
            return recurse(left+1, right, scoreDiff-piles[left], piles) || recurse(left, right-1, scoreDiff+piles[right], piles);
    }
public:
    bool stoneGame(vector<int>& piles)
    {
        return recurse(0, piles.size()-1, 0, piles);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {7,8,8,10};
    cout<<obj.stoneGame(vec);
}


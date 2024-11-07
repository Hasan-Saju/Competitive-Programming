#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> board;
    int originalColor;
    void dfs(int sr, int sc, int color, int row, int col)
    {
        if(sr<0 || sc<0 || sr>=row || sc>=col || board[sr][sc]!=originalColor || board[sr][sc]==color)
            return;
        board[sr][sc] = color;

        dfs(sr+1, sc, color, row, col);
        dfs(sr-1, sc, color, row, col);
        dfs(sr, sc+1, color, row, col);
        dfs(sr, sc-1, color, row, col);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
    {
        board = image;
        originalColor = image[sr][sc];
        dfs(sr, sc, color, image.size(), image[0].size());
        return board;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,1,1},{1,1,0},{1,0,1}};
    vector<vector<int>>ans= obj.floodFill(vec,1,1,2);

    for(auto v:ans)
    {
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}

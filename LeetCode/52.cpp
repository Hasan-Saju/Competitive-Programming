#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalNQueens(int n) {
        vector<vector<string>>res;
        vector<string>board(n, string(n,'.'));
        int kount = 0;
        backtrack(0, board, res, kount);
        return kount;
    }

    void backtrack(int r, vector<string>& board, vector<vector<string>>& res, int& kount )
    {
        if(r==board.size())
        {
            res.push_back(board);
            kount++;
            return;
        }

        for(int c=0; c<board.size(); c++)
        {
            if(isSafe(r, c, board))
            {
                board[r][c] = 'Q';
                backtrack(r+1, board, res, kount);
                board[r][c] = '.';
            }
        }
    }

    bool isSafe(int r, int c, vector<string>& board)
    {
        for(int i=r-1; i>=0; i--)
            if(board[i][c]=='Q')
                return false;

        for(int i=r-1, j=c-1; i>=0 and j>=0; i--, j--)
            if(board[i][j]=='Q')
                return false;

        for(int i=r-1, j=c+1; i>=0 and j<board.size(); i--, j++)
            if(board[i][j]=='Q')
                return false;

        return true;
    }
};


int main()
{
    Solution obj;
    vector<vector<int>>vec = {{7,10}, {2,4}};
    obj.totalNQueens(4);
}





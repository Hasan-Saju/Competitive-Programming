#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool recursion(int i, int j, int ind, string& word, vector<vector<char>>& board)
    {
        if(ind==word.size())
            return true;
        if(i<0 or j<0 or i>=board.size()
                or j>=board[0].size() or board[i][j]!=word[ind])
            return false;

        char temp = board[i][j];
        board[i][j] = '#';

        bool res = recursion(i+1, j, ind+1, word, board) ||
                   recursion(i-1, j, ind+1, word, board) ||
                   recursion(i, j+1, ind+1, word, board) ||
                   recursion(i, j-1, ind+1, word, board);

        board[i][j] = temp;
        return res;


    }
    bool exist(vector<vector<char>>& board, string word)
    {
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[0].size(); j++)
            {
                if(recursion(i,j,0,word,board))
                    return true;
            }
        }
        return false;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    //obj.twoSum(vec);
}

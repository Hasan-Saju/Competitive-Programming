#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words)
    {
        vector<string>res;
        int row = board.size();
        int col = board[0].size();

        for(string& word:words)
        {
            bool flag = false;
            for(int i=0; i<row and !flag; i++)
            {
                for(int j=0; j<col; j++)
                {
                    if(board[i][j]!=word[0])
                        continue;
                    if(backtrack(i, j, board, word, 0))
                    {
                        res.push_back(word);
                        flag=true;
                        break;
                    }

                }
            }
        }
        return res;
    }

    bool backtrack(int row, int col, vector<vector<char>>& board, string& word, int ind)
    {
        if(ind==word.size())
            return true;
        if(row<0 or col<0 or row>=board.size() or col>=board[0].size() or board[row][col]!=word[ind])
            return false;

        board[row][col] = '*';
        bool ret = backtrack(row+1, col, board, word, ind+1) ||
                   backtrack(row-1, col, board, word, ind+1) ||
                   backtrack(row, col+1, board, word, ind+1) ||
                   backtrack(row, col-1, board, word, ind+1);
        board[row][col] = word[ind];
        return ret;
    }
};
int main()
{
    Solution obj;
    vector<vector<char>>vec =
    {
        {
            'o', 'a', 'a', 'n'
        },
        {
            'e', 't','a', 'e'
        },
        {
            'i', 'h', 'k', 'r'
        },
        {
            'i', 'f', 'l', 'v'
        }
    };
    vector<string> w = {"oath","pea","eat","rain"};
    vector<string> ans = obj.findWords(vec, w);

    for(auto x:ans)
        cout<<x<<" ";
}

//Input: board = [["o","a","a","n"],["e","t","a","e"],["i","h","k","r"],["i","f","l","v"]], words = ["oath","pea","eat","rain"]
//Output: ["eat","oath"]

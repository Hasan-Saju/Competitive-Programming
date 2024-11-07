#include<bits/stdc++.h>
using namespace std;

class Solution
{
    bool recurse(vector<vector<char>>& board, string word, int ind, int x, int y)
    {
        if(ind==word.size())
            return true;
        if(x < 0 || y < 0 || x >= board.size() || y >= board[0].size() || board[x][y] != word[ind])
            return false;

        char temp = board[x][y];
        board[x][y] = '#';

        bool found = recurse(board, word, ind + 1, x + 1, y) ||
                     recurse(board, word, ind + 1, x - 1, y) ||
                     recurse(board, word, ind + 1, x, y + 1) ||
                     recurse(board, word, ind + 1, x, y - 1);

        board[x][y]=temp;
        return found;

    }
public:
    bool exist(vector<vector<char>>& board, string word)
    {
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(recurse(board, word, 0, i, j))
                    return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution obj;
    vector<vector<char>>vec = {{'A', 'B', 'C', 'E'},
        {
            'S', 'F', 'C', 'S'
        },
        {
            'A', 'D', 'E', 'E'
        }
    };
    cout<<obj.exist(vec, "ABCCEDG");
}

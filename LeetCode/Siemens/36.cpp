#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        unordered_set<char>rows[9];
        unordered_set<char>cols[9];
        unordered_set<char>boxes[9];

        for(int r=0; r<9; r++)
        {
            for(int c=0; c<9; c++)
            {
                char ch = board[r][c];
                if(ch=='.')
                    continue;

                if(rows[r].find(ch)!=rows[r].end())
                    return false;
                rows[r].insert(ch);

                if(cols[c].find(ch)!=cols[c].end())
                    return false;
                cols[c].insert(ch);

                int ind = (r/3)*3 + c/3;
                if(boxes[ind].find(ch)!=boxes[ind].end())
                    return false;
                boxes[ind].insert(ch);
            }
        }

        return true;
    }
};
int main()
{
    Solution obj;
    //vector<vector<char>>vec = {2,7,11,15};
    vector<vector<char>> board =
    {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    cout<<obj.isValidSudoku(board);
}


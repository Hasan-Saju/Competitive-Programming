#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    bool isValidSudoku(vector<vector<char>>& board)
    {
        unordered_map<int, unordered_map<char,int> >rows;
        unordered_map<int, unordered_map<char,int> >cols;
        unordered_map<int, unordered_map<char,int> >grids;

        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(board[i][j]!='.')
                {
                    rows[i][board[i][j]]++;
                    cols[j][board[i][j]]++;
                    grids[(i/3)*3 + j/3][board[i][j]]++;

                    if(rows[i][board[i][j]]>1 or cols[j][board[i][j]]>1 or grids[(i/3)*3 + j/3][board[i][j]]>1)
                        return false;
                }

            }
        }

        return true;
    }
};

int main()
{
    Solution obj;

    vector<vector<char> >vec
    {
        {'5','3','.','.','.','.','.','.','.'}
        ,{'6','.','.','1','5','5','.','.','.'}
        ,{'.','9','8','.','.','.','.','6','.'}
        ,{'8','.','.','.','6','.','.','.','3'}
        ,{'4','.','.','8','.','3','.','.','1'}
        ,{'7','.','.','.','2','.','.','.','6'}
        ,{'.','6','.','.','.','.','2','8','.'}
        ,{'.','.','.','4','1','9','.','.','5'}
        ,{'.','.','.','.','8','.','.','7','9'}};

    obj.isValidSudoku(vec);
}


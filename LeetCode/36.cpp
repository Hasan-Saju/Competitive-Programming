#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    bool boxChecking(vector<vector<char>>& board,int x, int y)
    {
        bool result = true;

        map<char,int>mp;
        for(int i=x; i<x+3; i++)
        {

            for(int j=y; j<y+3; j++)
            {
                if(mp[board[i][j]] and board[i][j]!='.')
                {
                    result=false;
                    cout<<i<<" "<<j<<"\n";
                    break;
                }

                mp[board[i][j]]=1;
            }
            if(result==false)
                break;

        }
        return result;
    }

    bool rowWiseCheck(vector<vector<char>>& board)
    {
        bool result=true;


        for(int i=0; i<9; i++)
        {
            map<char,int>mp;
            for(int j=0; j<9; j++)
            {
                if(mp[board[i][j]] and board[i][j]!='.')
                {
                    result=false;
                    cout<<i<<" "<<j<<"\n";
                    break;
                }

                mp[board[i][j]]=1;
            }
            if(result==false)
                break;
            mp.clear();

        }
        return result;
    }

    bool colWiseCheck(vector<vector<char>>& board)
    {
        bool result =true;
        for(int i=0; i<9; i++)
        {
            map<char,int>mp;
            for(int j=0; j<9; j++)
            {
                if(mp[board[j][i]] and board[j][i]!='.')
                {
                    result=false;
                    cout<<i<<" "<<j<<"\n";
                    break;
                }

                mp[board[j][i]]=1;
            }
            if(result==false)
                break;
            mp.clear();

        }
        return result;
    }


    bool isValidSudoku(vector<vector<char>>& board)
    {
        bool result =true;

        ///row checking
        result = rowWiseCheck(board);
        if(result==false)
            return result;
        cout<<result<<"\n";

        ///column checking
        result = colWiseCheck(board);
        if(result==false)
            return result;
        cout<<result<<"\n";


        ///box checking
        for(int i=0; i<9; i=i+3)
        {
            for(int j=0; j<9; j=j+3)
            {
                result=boxChecking(board,i,j);
                if(!result)
                    return result;
            }

        }

        return result;
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

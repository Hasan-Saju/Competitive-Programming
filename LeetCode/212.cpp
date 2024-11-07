#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isStringFound(vector<vector<char>>& board, string target, int i, int j, int ind)
    {
        if(target.size() == ind)
            return true;
        else if(i<0 or j<0 or i>=board.size() or j>=board[0].size() or board[i][j]!=target[ind])
            return false;

        char temp = board[i][j];
        board[i][j] = '#';

        bool check = isStringFound(board, target, i+1, j, ind+1) ||
                     isStringFound(board, target, i-1, j, ind+1) ||
                     isStringFound(board, target, i, j+1, ind+1) ||
                     isStringFound(board, target, i, j-1, ind+1);

        board[i][j]=temp;
        return check;
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words)
    {
        vector<string>result;
        bool breaker=true;
        for(auto word:words)
        {
            breaker=true;
            for(int i = 0; i < board.size() && breaker; i++)
            {
                for(int j = 0; j < board[0].size() && breaker; j++)
                {
                    if(board[i][j] == word[0] && isStringFound(board, word, i, j, 0))
                    {
                        //cout<<"\ngotIT\n"<<word;
                        result.push_back(word);
                        breaker = false;
                        break;
                    }
                }
            }
        }

        return result;
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

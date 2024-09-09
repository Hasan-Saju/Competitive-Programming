#include<bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int slidingPuzzle(vector<vector<int>>& board)
    {
        string target = "123456789ABCDEF0";
        string init = "";
        map<int, string> mp =
        {
            {10, "A"},
            {11, "B"},
            {12, "C"},
            {13, "D"},
            {14, "E"},
            {15, "F"}
        };


        for(auto x:board)
        {
            for(auto y:x)
            {
                init += y>9 ? mp[y] : to_string(y);
            }
        }

        set<string> visited;
        queue<pair<string,int> > Q;

        Q.push(make_pair(init, 0));

        while(!Q.empty())
        {

            string state = Q.front().first;
            int value = Q.front().second;
            visited.insert(state);
            Q.pop();

            cout<<state<<"\n";

            if(state == target)
            {
                return value;
            }

            int index = state.find('0');

            // Possible moves: up, down, left, right
            vector<int> dirs = {-4, 4, -1, 1};
            for (int dir : dirs)
            {
                int newIndex = index + dir;
                if (newIndex >= 0 && newIndex < 16)
                {
                    if ((dir == -1 && index % 4 == 0) || (dir == 1 && index % 4 == 3))
                    {
                        continue;
                    }
                    string temp = state;
                    swap(temp[index], temp[newIndex]);
                    if (visited.find(temp) == visited.end())
                    {
                        Q.push(make_pair(temp, value + 1));
                    }
                }
            }
        }

        return -1;


    }
};

int main()
{
    Solution obj;
    vector<vector<int> >vec = {{12, 1, 2, 15},
        {11,6,5, 8},
        {
            7, 10, 9, 4
        },
        {
            0, 13, 14, 3
        }
    };
    cout<<obj.slidingPuzzle(vec);
}


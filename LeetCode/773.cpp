#include<bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int slidingPuzzle(vector<vector<int>>& board)
    {
        string target = "123450";
        string init = "";

        for(auto x:board)
        {
            for(auto y:x)
            {
                init += to_string(y);
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



            int index = -1;
            for(int i=0; i<state.size(); i++)
            {
                if(state[i]=='0')
                {
                    index = i;
                    break;
                }
            }

            //going top
            if(index-3>=0)
            {
                string temp = state;
                swap(temp[index], temp[index-3]);
                if(visited.find(temp)==visited.end())
                {
                    Q.push(make_pair(temp, value+1));
                }
            }

            //going down
            if(index+3<=5)
            {
                string temp = state;
                swap(temp[index], temp[index+3]);
                if(visited.find(temp)==visited.end())
                {
                    Q.push(make_pair(temp, value+1));
                }
            }

            //going left
            if(index!=0 and index!=3)
            {
                string temp = state;
                swap(temp[index], temp[index-1]);
                if(visited.find(temp)==visited.end())
                {
                    Q.push(make_pair(temp, value+1));
                }
            }

            //going right
            if(index!=2 and index!=5)
            {
                string temp = state;
                swap(temp[index], temp[index+1]);
                if(visited.find(temp)==visited.end())
                {
                    Q.push(make_pair(temp, value+1));
                }
            }


        }

        return -1;


    }
};

int main()
{
    Solution obj;
    vector<vector<int> >vec = {{4, 1, 2},
        {5,0,3}
    };
    cout<<obj.slidingPuzzle(vec);
}


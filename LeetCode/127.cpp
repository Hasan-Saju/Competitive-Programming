#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    bool numberOfMismatch(string a, string b)
    {
        int mismatchh=0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]!=b[i])
                mismatchh++;
            if(mismatchh>1)
                return false;
        }
        return mismatchh==1 ? true:false;
    }
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList)
    {
        map<string, int>mp;
        mp[beginWord]=0;
        int ind=1;
        for(auto word:wordList)
        {
            cout<<word<<" "<<ind<<" \n";
            if(!mp.count(word))
            {
                mp[word]=ind;
                ind++;
            }

        }
        wordList.push_back(beginWord);

        if(!mp.count(endWord))
            return 0;

        vector<vector<int>>adj(wordList.size());
        for(int i=0; i<wordList.size(); i++)
        {
            int nodeA = mp[wordList[i]];

            for(int j=i+1; j<wordList.size(); j++)
            {
                if(numberOfMismatch(wordList[i], wordList[j]))
                {
                    int nodeB = mp[wordList[j]];
                    adj[nodeA].push_back(nodeB);
                    adj[nodeB].push_back(nodeA);

                    cout<<nodeA<<" "<<nodeB<<" \n";
                }

            }
        }

        vector<int>vis(wordList.size(),0);
        vector<int>dis(wordList.size(),0);
        vis[0] = 1;
        dis[0] = 1;
        queue<int>q;
        q.push(0);

        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            cout<<x<<" x\n";
            for(auto n:adj[x])
            {
                cout<<n<<" n\n";
                if(!vis[n])
                {
                    vis[n]=1;
                    dis[n] = dis[x]+1;
                    q.push(n);
                }
            }
        }

        return dis[mp[endWord]];

    }
};
int main()
{
    Solution obj;
    vector<string>vec = {"a", "b", "c"};
    cout<<obj.ladderLength("a", "c", vec);
}


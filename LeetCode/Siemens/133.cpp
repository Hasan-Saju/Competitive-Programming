#include<bits/stdc++.h>
using namespace std;

//Definition for a Node.
class Node
{
public:
    int val;
    vector<Node*> neighbors;
    Node()
    {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val)
    {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors)
    {
        val = _val;
        neighbors = _neighbors;
    }
};


class Solution
{
public:
    Node* cloneGraph(Node* node)
    {
        if(node==nullptr)
            return nullptr;

        unordered_map<Node*, Node*>oldNewMap;
        queue<Node*>q;

        oldNewMap[node] = new Node(node->val);
        q.push(node);

        while(!q.empty())
        {
            Node* cur = q.front();
            q.pop();

            for(Node* neww:cur->neighbors)
            {
                if(oldNewMap.find(neww)==oldNewMap.end())
                {
                    oldNewMap[neww] = new Node(neww->val);
                    q.push(neww);
                }
                oldNewMap[cur]->neighbors.push_back(oldNewMap[neww]);
            }
        }
        return oldNewMap[node];
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}


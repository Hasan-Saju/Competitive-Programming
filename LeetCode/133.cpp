class Solution {
public:
    Node* cloneGraph(Node* node) {
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
                if(oldNewMap.find(neww) ==oldNewMap.end() )
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

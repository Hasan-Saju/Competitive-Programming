#include<bits/stdc++.h>
using namespace std;

class KthLargest
{
public:
    priority_queue<int, vector<int>, greater<int>>pq;
    int kth;
    KthLargest(int k, vector<int>& nums)
    {
        kth = k;
        for(auto x:nums)
        {
            pq.push(x);
            if(pq.size()>kth)
                pq.pop();
        }
    }

    int add(int val)
    {
        pq.push(val);
        if(pq.size()>kth)
            pq.pop();

        return pq.top();
    }
};

int main()
{

    vector<int>vec = {4, 5, 8, 2, 10, 9};
    KthLargest obj(3, vec );
    cout<<obj.add(3);
}


#include<bits/stdc++.h>
using namespace std;
class MyStack
{
private:
    queue<int>q;
public:
    MyStack()
    {

    }

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {
        int ind = q.size()-1;
        int i=0;
        while(true)
        {
            int top = q.front();
            q.pop();
            if(i==ind)
                return top;
            q.push(top);

            i++;
        }
    }

    int top()
    {
        int ind = q.size()-1;
        int i=0;
        while(true)
        {

            int top = q.front();
            q.push(top);
            q.pop();

            if(i==ind)
                return top;

            i++;
        }
    }

    bool empty()
    {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}


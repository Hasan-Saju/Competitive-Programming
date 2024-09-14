#include<bits/stdc++.h>
using namespace std;

class MinStack
{
private:
    stack<int>st;
    stack<pair<int, int> >smin;
    int minn=INT_MAX;
public:
    MinStack()
    {
        minn = INT_MAX;
    }

    void push(int val)
    {
        if(st.empty())
            minn = val;
        else
            minn = min(smin.top().second, val);

        st.push(val);
        smin.push(make_pair(val,minn));
    }

    void pop()
    {
        if(!st.empty())
        {
            st.pop();
            smin.pop();
        }
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return smin.top().second;
    }
};

int main()
{

    //Your MinStack object will be instantiated and called as such:
    MinStack* obj = new MinStack();
    obj->push(4);
    obj->pop();
    int param_3 = obj->top();
    int param_4 = obj->getMin();
}

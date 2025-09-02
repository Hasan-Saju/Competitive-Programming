#include<bits/stdc++.h>
using namespace std;
class StockSpanner
{
    stack<pair<int, int>>st;
public:
    StockSpanner()
    {}

    int next(int price)
    {
        if(st.size() and st.top().first<=price)
        {
            cout<<"\n here \n";
            int temp=0;
            while(st.size() and st.top().first<=price)
            {
                temp+=st.top().second;
                st.pop();
            }
            st.push({price, temp+1});
        }
        else
            st.push({price, 1});

        return st.top().second;
    }
};
int main()
{
    StockSpanner obj;
    vector<int>vec = {2,7,11,15};
    //obj.StockSpanner();
    cout<<obj.next(31);
    cout<<obj.next(41);
    cout<<obj.next(48);
    cout<<obj.next(59);
    cout<<obj.next(79);
}


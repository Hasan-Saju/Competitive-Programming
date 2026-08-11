#include<bits/stdc++.h>
using namespace std;
class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>>available;
    SeatManager(int n) {
        for(int i=1; i<=n;i++)
            available.push(i);
    }

    int reserve() {
        int seat = available.top();
        available.pop();
        return seat;
    }

    void unreserve(int seatNumber) {
        available.push(seatNumber);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}


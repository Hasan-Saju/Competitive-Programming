#include<bits/stdc++.h>
using namespace std;

class MedianFinder {
public:
    priority_queue<int>maxHeap;
    priority_queue<int, vector<int>, greater<int> >minHeap;
    MedianFinder() {

    }

    void addNum(int num) {
        if(maxHeap.empty() || num < maxHeap.top())
            maxHeap.push(num);
        else
            minHeap.push(num);

        if(maxHeap.size() > minHeap.size()+1)
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        else if(minHeap.size() > maxHeap.size()+1)
        {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    double findMedian() {
        if(maxHeap.size()>minHeap.size())
            return (double)maxHeap.top();
        else if(minHeap.size()>maxHeap.size())
            return (double)minHeap.top();
        else
            return (double)(maxHeap.top()+minHeap.top())/(double)2;
    }
};

int main()
{
    MedianFinder obj;
    obj.addNum(1);
    obj.addNum(2);
    cout<<obj.findMedian();
}


#include<bits/stdc++.h>
using namespace std;
class LRUCache
{
private:
    int sizee;
    map<int, int>keyVal;
    map<int, int>keyTs;
    int timestamp;
public:
    LRUCache(int capacity)
    {
        sizee=capacity;
        timestamp=0;
    }

    int get(int key)
    {
        timestamp++;
        if(keyVal.count(key))
        {
            keyTs[key] = timestamp;
            return keyVal[key];
        }
        else
            return -1;
    }

    void put(int key, int value)
    {
        timestamp++;
        if(keyVal.count(key))
        {
            keyVal[key]= value;
            keyTs[key] = timestamp;
        }
        else
        {
            if(keyVal.size()>=sizee)
            {
                int oldest=INT_MAX;
                int dlt;
                for(auto ele:keyTs)
                {
                    auto [k,v] = ele;
                    if(v<oldest)
                    {
                        oldest = v;
                        dlt = k;
                    }
                }
                cout<<"del "<<dlt<<"\n";
                keyTs.erase(dlt);
                keyVal.erase(dlt);
            }

            keyVal[key] = value;
            keyTs[key] = timestamp;
        }

    }
};
int main()
{
    LRUCache obj(2);
    obj.put(1,1);
    obj.put(2,2);
    cout<<obj.get(1)<<endl;
    obj.put(3,3);
    cout<<obj.get(2)<<endl;
    obj.put(4,4);
    cout<<obj.get(1)<<endl;
    cout<<obj.get(3)<<endl;
    cout<<obj.get(4)<<endl;
}


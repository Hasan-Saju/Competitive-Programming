#include<bits/stdc++.h>
using namespace std;

class TimeMap
{
public:
    unordered_map<string, map<int, string>> data;
    TimeMap()
    {

    }

    void set(string key, string value, int timestamp)
    {
        data[key][timestamp] = value;
    }

    string get(string key, int timestamp)
    {
        auto it = data[key].upper_bound(timestamp);
        if(it == data[key].begin())
            return "";
        it--;
        return it->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */

int main()
{
    TimeMap obj;
    vector<int>vec = {2,7,11,15};
    obj.set("foo", "bar", 1);
    obj.set("foo", "bar", 2);
    cout<<obj.get("foo", 3);
}


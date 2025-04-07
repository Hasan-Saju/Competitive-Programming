#include<bits/stdc++.h>
using namespace std;
class MyHashMap
{
private:
    vector<int>mp;
public:
    MyHashMap()
    {
        mp.resize(1000005,-1);
    }

    void put(int key, int value)
    {
        mp[key] = value;
    }

    int get(int key)
    {
        return mp[key];
    }

    void remove(int key)
    {
        mp[key] = -1;
    }
};

int main()
{
    MyHashMap obj;
    vector<int>vec = {2,7,11,15};
    //obj.twoSum(vec);
}


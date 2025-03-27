#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int empt = 0;

        for (int i = 0; i < flowerbed.size(); ++i) {
            if (flowerbed[i] == 0 &&
                (i == 0 || flowerbed[i - 1] == 0) &&
                (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {

                flowerbed[i] = 1;
                ++empt;

                if (empt >= n) return true;
            }
        }
        return empt >= n;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,0,1,0,1,0,1};
    obj.canPlaceFlowers(vec, 1);
}


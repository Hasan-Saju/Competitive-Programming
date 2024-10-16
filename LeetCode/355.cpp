#include<bits/stdc++.h>
using namespace std;

class Twitter {
public:
    map<int, vector<int> > tweets;
    Twitter() {

    }
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back(tweetId);
    }

    vector<int> getNewsFeed(int userId) {

    }

    void follow(int followerId, int followeeId) {

    }

    void unfollow(int followerId, int followeeId) {

    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.rangeBitwiseAnd(1, 2147483647);
}


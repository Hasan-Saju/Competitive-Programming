#include<bits/stdc++.h>
using namespace std;

class Twitter
{
public:
    map<int, set<int> > followMap;
    map<int, vector<pair<int, int>> > tweet;
    int time = 1;


    Twitter()
    {

    }
    void postTweet(int userId, int tweetId)
    {
        tweet[userId].push_back(make_pair(time,tweetId));
        time++;
    }

    vector<int> getNewsFeed(int userId)
    {
        priority_queue<tuple<int, int, int, int>>newsfeed;
        vector<int>result;

        // Add the user's own tweets to the newsfeed
        followMap[userId].insert(userId);
        // Add followees' tweets to the newsfeed
        for(auto followee:followMap[userId])
        {
            if(!tweet[followee].empty())
            {
                int last_index = tweet[followee].size()-1;
                auto [post_serial, tweet_Id] = tweet[followee][last_index];

                newsfeed.push(make_tuple(post_serial, tweet_Id, followee, last_index-1 ));
            }

        }

        while(!newsfeed.empty() && result.size()<10)
        {
            auto [serial, tweet_Id, followee_Id, index] = newsfeed.top();
            result.push_back(tweet_Id);
            newsfeed.pop();

            if(index>=0)
            {
                auto [post_serial, tweet_Id] = tweet[followee_Id][index];
                newsfeed.push(make_tuple(post_serial, tweet_Id, followee_Id, index-1 ));
            }
        }

        return result;
    }

    void follow(int followerId, int followeeId)
    {
        followMap[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId)
    {
        if(followMap.find(followerId)!=followMap.end())
            followMap[followerId].erase(followeeId);
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
    Twitter obj;
    obj.postTweet(1,5);
    vector<int>ans=obj.getNewsFeed(1);
    for(auto x:ans)
        cout<<x<<" ";
}


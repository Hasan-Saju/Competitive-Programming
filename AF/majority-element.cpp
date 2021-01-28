class Solution
{
public:
    int majorityElement(vector<int>& nums)
    {

        map<int,int>mp;
        int highest=0;
        int value=0;
        for(auto x:nums )
        {
            mp[x]++;
            if(mp[x]>highest)
                highest=mp[x],value=x;
            //highest=max(mp[x],highest);

        }
        return value;
    }
};

class Solution {
public:


    int binSearch(int l,int r,int key,vector<int> &nums)
    {
        int lo = l;
        int hi = r;
        while(lo<=hi)
        {
            int mid = (lo+hi)/2;

            if(nums[mid]>=key) hi = mid - 1;
            else if(nums[mid]<key) lo = mid + 1;
        }

        return lo;
    }

    void call(int l,int r,vector<int> &nums,vector<int> &cnt)
    {

        if(l<r)
        {
            int mid = (l+r)/2;

            call(mid+1,r,nums,cnt);

            for(int k = l;k<=mid;k++)
                cnt[k] += binSearch(mid + 1,r,nums[k], nums) - (mid + 1);


            call(l,mid,nums,cnt);

            vector<int> temp;

            //merge(nums.begin() + l,nums.begin()+mid,nums.begin()+mid+1,nums.begin()+r,temp.begin());

            int i = l;
            int j = mid + 1;


            while(i<=mid && j<=r)
            {
                if(nums[i]<nums[j]) temp.push_back(nums[i++]);
                else temp.push_back(nums[j++]);

            }
            while(i<=mid)temp.push_back(nums[i++]);
            while(j<=r) temp.push_back(nums[j++]);



            int in = 0;

            for(int k = l;k<=r;k++)
                nums[k] = temp[in++];

        }

    }
    vector<int> countSmaller(vector<int>& nums) {


        vector<int>cnt(nums.size());
        for(int i =0;i<cnt.size();i++)cnt[i] = 0;
        call(0,nums.size() - 1,nums,cnt);

        return cnt;
    }
};

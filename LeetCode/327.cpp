class Solution {
public:
    using LL = long long;
    int mergeSort(vector<LL>& nums, int begin, int end, int lower, int upper){
        if(begin >= end) return 0;
        int mid = begin + (end - begin) / 2;
        int rnt = mergeSort(nums, begin, mid, lower, upper) + mergeSort(nums, mid + 1, end, lower, upper);
        rnt += countRange(nums, begin, end, upper) - countRange(nums, begin, end, lower - 1);
        int lp = begin, rp = mid + 1, pt = 0;
        vector<LL> tmp(end - begin + 1);
        while(lp <= mid || rp <= end){
            if(rp > end || (lp <= mid && nums[lp] <= nums[rp]))
                tmp[pt++] = nums[lp++];
            else
                tmp[pt++] = nums[rp++];
        }
        for(int i = 0; i <= end - begin; i ++)
            nums[i + begin] = tmp[i];
        return rnt;
    }

    int countRange(vector<LL>& nums, int begin, int end, int upper){
        int mid = begin + (end - begin) / 2;
        int rnt = 0;
        for(int i = begin, rp = mid + 1; i <= mid; i ++){
            while(rp <= end && nums[rp] - nums[i] <= upper)
                rp ++;
            rnt += rp - mid - 1;
        }
        return rnt;
    }

    int countRangeSum(vector<int>& nums, int lower, int upper) {
        vector<LL> preSum(nums.size() + 1, 0);
        for(int i = 1; i <= nums.size(); i ++)
            preSum[i] = preSum[i - 1] + nums[i - 1];
        return mergeSort(preSum, 0, preSum.size() - 1, lower, upper);
    }
};

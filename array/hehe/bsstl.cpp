//first and last occurence of an element
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};

        int l=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(!(l<nums.size() && nums[l]==target))
            l=-1;

        int r=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        r--;
        if(r>=0 && nums[r]==target)
            return {l,r};

        return {l,-1};
    }
};

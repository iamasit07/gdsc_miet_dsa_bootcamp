class Solution {
private:
    int fun(vector<int>& nums, int target)
    {
        int n=nums.size();
        int l=0, r=n-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(nums[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return l;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int low = 0, high = nums.size()-1;
        int a = fun(nums, target);
        int b = fun(nums, target + 1) - 1;
        if(a < nums.size() && nums[a] == target)
            return {a, b};
        return {-1, -1};
    }
};
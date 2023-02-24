class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        vector<int>a;
        int n=nums.size();
        if(k>n)
            k=k%n;
        for(int i=n-k;i<n;i++)
        {
            a.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++)
        {
            a.push_back(nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=a[i];
        }
    }
};
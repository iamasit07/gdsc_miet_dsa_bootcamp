class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        int n=nums.size();
        set<vector<int>> s;
        vector<vector<int>> a;
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                for(int k=j+1;k<n;k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0)
                    {
                        vector<int> v(3);
                        v[0] = nums[i];
                        v[1] = nums[j];
                        v[2] = nums[k];
                        sort(v.begin(), v.end());
                        s.insert(v);
                    }
                }
        
        for(auto v: s)
            a.push_back(v);
        return a;
    }
};
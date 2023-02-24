class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        long long cnt;
        vector<int> n = nums;
        sort(n.begin(),n.end());
        for(long long i=0;i<n.size();i++)
        {
            if(n[i]==n[i+1])
            {
                cnt=n[i];
                break;
            }
        }
        return cnt;
    }
};
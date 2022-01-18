class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int sum=0;
        int n=nums.size();
        int ans=INT_MAX;
        int i=0;
        
        for(int j=0;j<n;j++)
        {
            sum+=nums[j];
            while(sum>=target)
                {
                     sum-=nums[i];
                     ans=min(ans,j-i+1);
                     i++; 
                }

        }
        return i==0?0:ans;
    }
};
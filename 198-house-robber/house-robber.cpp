class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,0);
        dp[0] = nums[0];
        
        for(int i = 1;i<n;i++){
            
            
            int pick = nums[i];
            if(i>1) pick+=dp[i-2];
            int np = dp[i-1];
            dp[i] = max(np,pick);
        }
        return dp[n-1];
    }
};
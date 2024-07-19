class Solution {
public:
    int maxProduct(vector<int>& nums) {
    
        // dp[0] = nums[0];
        long long int INF = 1e9*10;
        int n = nums.size();
        long long int res = INT_MIN;
        long long int prod = 1;
        for(int i =0;i<n;i++){
            prod = (prod*nums[i])%INF;
            res = max(res,prod);
            if(prod==0){
                prod = 1;
            }
        }
        prod = 1;
        for(int  i = n-1;i>=0;i--){
 prod = (prod*nums[i])%INF;
            res = max(res,prod);
            if(prod== 0){
                prod = 1;
            }
        }
        return res;
    }
};
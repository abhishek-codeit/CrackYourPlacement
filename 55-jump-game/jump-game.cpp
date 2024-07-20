class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int last = n-1;
        for(int i= n-2;i>=0;i--){
            if((i+nums[i]) >= last){
                last = i;
            }
        }
        if(last == 0){
            return true;
        }else {
            return false;
        }
    }
};

// class Solution {
// public:
//     bool canJump(vector<int>& nums) {
//         int n = nums.size();
//        vector<int> dp(n+1,-1); 
//        //stuff to do is iterate to all the k's if the solution is there 
//        dp[n-1] = 1;

//        for(int i = n-2;i>=0;i--){
//             if(nums[i]==0){
//                 dp[i] = false;
//                 continue;
//             }
//             int flag = 0;
//             int reach = i + nums[i];
//             for(int jum = i+1;jum<=reach&&jum<nums.size();jum++){
//                 if(dp[jum]){
//                     dp[i] = true;
//                     flag = 1;
//                     break;
//                 }
//             }
//             if(flag == 1){
//                 continue;
//             }
//             dp[i] = false;
//        }
//     return dp[0];
//     }
// };
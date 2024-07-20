class Solution {
public:
    int fi(vector<int>& nums){
        int prev1 = 0;
        int prev2 = nums[0];
      // prev2 = just behind
      // prev1 = is behind prev2
        int n = nums.size();
        int res = 0;
        for(int i = 1;i<n;i++){
            int pick = nums[i];
            int np = prev2;
            if(i>1){
                pick+=prev1;
            }
            res = max(pick,np);
            prev1 = prev2;
            prev2 = res;
        }
        return prev2;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
            int n = nums.size();
            vector<int> temp1,temp2;
            for(int i = 0;i<n;i++){
                if(i!=0) temp1.push_back(nums[i]);
                if(i!=n-1) temp2.push_back(nums[i]);
            }
            // cout<<fi(temp1)<<endl;
        return max(fi(temp1),fi(temp2));    
        }
};
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    
    int n = nums.size();
       for(int i =0;i<n;i++){
        if(nums[i]==0){
            int k = i;
            while(nums[k]==0&&k<n-1){
                k++;
            }
            swap(nums[i],nums[k]);
        }
       }
    
    }
};
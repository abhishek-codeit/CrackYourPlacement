class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]] = i;
        }
        for(int i = 0;i<nums.size();i++){
            target -= nums[i];
            if(mp.find(target)!=mp.end()&&mp[target]!=i){
                
                return {i,mp[target]};
            }
            target+=nums[i];
        }
        return {0};
    }
};
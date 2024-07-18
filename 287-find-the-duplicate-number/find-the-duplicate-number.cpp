class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans = INT_MAX;
        for(auto i:nums){
            if(mp.find(i)!=mp.end()){
                ans = i;
                break;
            }else{
                mp[i] = 1;
            }
        }
        return ans;
    }
};
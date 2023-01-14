class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        map<int, bool>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=true;
        }
        while(mp[original]){
            original*=2;
            if(!mp[original]){
                return original;
            }
        }
        return original;
    }
};

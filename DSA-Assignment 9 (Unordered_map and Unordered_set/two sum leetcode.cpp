class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>Ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    Ans.push_back(i);
                    Ans.push_back(j);
                }
            }
        }
        return Ans;
    }
};

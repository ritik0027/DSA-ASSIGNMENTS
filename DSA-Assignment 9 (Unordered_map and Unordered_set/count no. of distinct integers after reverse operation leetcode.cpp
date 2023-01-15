class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            int rev=0,rem;
            while(nums[i]!=0){
                rem=nums[i]%10;
                rev=rev*10+rem;
                nums[i]=nums[i]/10;
            }
            s.insert(rev);
        }
        int ans = s.size();
        return ans;
    }
};

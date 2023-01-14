class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int>temp(1000);
        for(int i=0;i<nums.size();i++){
            temp[nums[i]]++;
        }
        vector<int>A;
        for(int i=0;i<temp.size();i++){
            if(temp[i]==1){
                A.push_back(i);
            }
        }
        int sum=0;
        for(int i=0;i<A.size();i++){
            sum=sum+A[i];
        }
        return sum;
    }
};

 vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>A;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                low=-1;
            }
        }
        A.push_back(low);
        A.push_back(low+1);
        return A;
    }

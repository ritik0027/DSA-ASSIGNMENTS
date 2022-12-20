int search(vector<int>& nums,int target){
    int n=(int)nums.size();
    int low=0, high=n-1,mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(target==nums[mid]){
            return mid;
        }
        else if(nums[mid]<target){
            low=mid+1;}
            else {
                high=mid-1;
            }
    }
    return -1;
}
};

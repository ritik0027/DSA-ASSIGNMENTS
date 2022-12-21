 int arrangeCoins(int n) {
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(mid==n){
                return mid;
            }
            if((mid*(mid+1)/2)<=n){
                low=mid+1;
            }
            else{
                high=mid+1;
            }
        }
        return low-1;
    }

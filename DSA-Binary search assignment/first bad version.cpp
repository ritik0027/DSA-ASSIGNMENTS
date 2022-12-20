 int firstBadVersion(int n) {
    int low=1,high=n;
    int mid;
    while(low<=high){
      mid=(low+high)/2;
      if(isBadVersion(mid)== true){
          if(isBadVersion(mid-1)==false){
              return mid;
          }
          else{
              high=mid-1;
          }
      }  
      else if(isBadVersion(mid)==false){
          low=mid+1;

      }
    }return mid;
}

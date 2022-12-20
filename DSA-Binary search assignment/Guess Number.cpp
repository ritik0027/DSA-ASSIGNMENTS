#include<iostream>
using namespace std;
int GuessNum(int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(x==mid){
        	return mid;
        }
        else if(x>mid){
            low=mid+1;
        }
        else if(x<mid){
            high=mid-1;
            } 
           
    }
    return 0;
}
int main(){
    int a,b;
    cin>> a>> b;
    int c= GuessNum(a,b);
    cout << c;
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
void printvector(vector<int>A){
	for(int i=0;i<A.size();i++){
		cout<< A[i] << " " ;
	}
	cout << endl ;
}

void sort(vector<int>A){
	for(int i=0;i<A.size();i++){
		for(int j=i+1;j<A.size();j++){
			if(A[i]>A[j]){
				swap(A[i],A[j]);
			}
		}
	}
	printvector(A);
}

int main(){
	vector<int>arr={5,2,4,3,2,6,5,1,3,4,7,3};
	printvector(arr);
	cout << "sorted array" << endl;
	sort(arr);
	return 0 ;
}

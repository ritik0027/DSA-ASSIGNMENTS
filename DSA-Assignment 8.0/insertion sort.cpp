#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int>A)
{
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}
void sort(vector<int>&A)
{
	for(int i=1;i<A.size();i++){
		int x=A[i];
		int j=i-1;
		while(A[j]>x && j>=0){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=x;
	}
	printVector(A);
}

int main() {
	vector<int>A= {6,1,2,3,4,6,1};
	printVector(A);
	cout<<"sorted vector: ";
	sort(A);
	
	return 0;
}

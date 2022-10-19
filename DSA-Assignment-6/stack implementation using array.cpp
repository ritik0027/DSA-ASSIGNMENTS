#include<iostream>
using namespace std;
struct stack{
	int A[1000];
	int top=-1;
} ;
void Push(stack &s,int data){
	s.top-- ;
	s.A[s.top]=data;
}
void pop(stack &s){
	s.top-- ;
}
int TOP(stack s){
	return s.A[s.top];
}
int size(stack s){
	return s.top+1;
}
bool isEMpty(stack s){
	return s.top==-1;
}
int main(){
	stack s;
	Push(s,5);
	pop(s);
	Push(s,12);
	
	cout << "Top1:" << TOP(s) << endl ;
	pop(s);
	cout << "Top2:" << TOP(s) << endl ;
	Push(s,17);
	cout << "Top3:" << TOP(s) << endl ;
	cout << "Size " << size(s) << endl;
	return 0;
}

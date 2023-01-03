#include<iostream>
using namespace std;
struct node{                            
	int data;
	struct node* next;
};

void PrintLinkedList(node* head){         
	while(head!=NULL){                    
		cout<< head->data << "->";
		head=head->next;
	}
	cout << "NULL"<< endl;
}

int getsize(struct node* head){              
	int count=0;
	while(head!=NULL){                   
		count++;        	             
		head=head->next;
	}
	return count;
}

struct node* CreateNode(int value){         
	struct node* temp=new struct node();
	temp->data=value;
	temp->next=NULL;
	return temp;
}

struct node* CreateLinkedList(int n){          
	struct node* head=NULL;
	struct node* tail=NULL;
	for(int i=0;i<n;i++){                  
		int value;
		cin >> value;
		if(head==NULL){                   
			head=CreateNode(value);        
			tail=head;
		}
		else{                                
			tail->next=CreateNode(value);   
			tail=tail->next;
		}
	}
	return head;                            
}

struct node* GetkthNode(struct node *head,int k){
	while(head!=NULL && k>1){
		head=head->next;
		k--;
	}
	return head;
}

struct node* MergetwosortedLinkedList(struct node* head1,struct node* head2){
	struct node* temp;
	struct node* Newhead=NULL;
	struct node* Newtail=NULL;
	struct node* p1=head1;
	struct node* p2=head2;
	while(p1!=NULL && p2!=NULL){
		if((p1->data)<(p2->data)){
			temp=p1;
			p1=p1->next;
		}
		else{
			temp=p2;
			p2=p2->next;
		}
		if(Newhead==NULL){
			Newhead=temp;
		}
		else{
			Newtail->next=temp;
		}
		Newtail=temp;
	}
	if(Newhead==NULL){
		if(p1!=NULL){
			Newhead = p1;
		}
		else{
			Newhead = p2;
		}
	}
	else{
		if(p1!=NULL){
			Newtail->next = p1;
		}
		else{
			Newtail->next = p2;
		}
	}
	return Newhead;
}

struct node* Sort(struct node *head){
	if(head==NULL or head->next==NULL){
		return head;
	}
	int size=getsize(head);
	node* temp=GetkthNode(head,size/2);
	node* head2=temp->next;
	temp->next=NULL;

	head=Sort(head);
	head2=Sort(head2);
	struct node* sortedList=MergetwosortedLinkedList(head,head2);
	return sortedList;
}

int main(){
	int n;
	cin >>n;
	struct node* head=CreateLinkedList(n);
	PrintLinkedList(head);
	head=Sort(head);
	cout << "sorted linked list is : " ;
	PrintLinkedList(head);
	return 0;
}

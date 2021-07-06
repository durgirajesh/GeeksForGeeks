#include<iostream>
using namespace std;

struct node{
	
	int data;
	node* next;
};

node* insert(node* head,int x){
	
	node* tmp=new node();
	
	tmp->data=x;
	tmp->next=head;
	head=tmp;
}

void print(node* head){
	node* tmp=head;
	while(tmp!=NULL){
		cout<<tmp->data<<" ";
		tmp=tmp->next;
	}
	cout<<endl;
}

int getMiddle(node *head)
{
    node* tmp=head; 
    int count=0;
    while(tmp!=NULL){
        count++;
        tmp=tmp->next;
    }
    
    cout<<count<<" "<<endl;
    node* ptr=head;
    
    int i=1;
    while(i < (count/2)){
        ptr=ptr->next;
        i++;
    }
    cout<<ptr->next->data;
}

int main()
{
	node* head=NULL;
	int n; cin>>n;
	for(int i=0;i<n;i++){
		
		int x; cin>>x;
		head=insert(head,x);
	}
	print(head);
	getMiddle(head);
}

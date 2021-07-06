#include<iostream>
using namespace std;

int nearest(int a[],int i,int n)
{
	int j=i+1;
	while(i<n-1 && j<n && a[j]<a[i]){
		j++;
	}
	
	if(a[j]>a[i]){
		return a[j];
	}
	else{
		return -1;
	}
}// o(n*2)



int nextgreater(int a[],int n){
	
	for(int i=0;i<n-1;i++){
		
		a[i]=nearest(a,i,n);
	}
	a[n-1]=-1;
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main()
{
	int n; cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	nextgreater(a,n);
}

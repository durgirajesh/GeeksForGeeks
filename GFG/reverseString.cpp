#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void reverse(string s)
{
	int l = s.length();
	string str="";
	
	stack<string> st;
	for(int i=0;i<l;i++){
		
		if(s[i]=='.')
		{
			st.push(str);
			st.push(".");
			str="";
		}
		else{
			str+=s[i];
		}
	}
	
	st.push(str);
	
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
}

int main()
{
	string str="I like Programming";
	
	string s; 
	getline(cin,s);
	reverse(s);
}

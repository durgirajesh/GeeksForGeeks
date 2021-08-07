#include <iostream>
using namespace std;

void permutate(string str,int l,int r){
    if(l==r){
        cout<<str<<" ";
    }
    else{
        for(int i=l;i<=r;i++){
            swap(str[l],str[i]);
            permutate(str,l+1,r);
            swap(str[l],str[i]);
        }
    }
}


int main() {
    string str="abc";
    permutate(str,0,str.length()-1);
	return 0;
}

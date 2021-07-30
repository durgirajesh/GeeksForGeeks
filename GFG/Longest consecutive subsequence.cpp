#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        sort(arr,arr+N);
        vector<int> res;
        res.push_back(arr[0]);
        
        for(int i=1;i<N;i++){
            if(arr[i]!=arr[i-1]){
                res.push_back(arr[i]);
            }
        }
        int seq=0,ans=0;
        for(int i=0;i<res.size();i++){
            
            if(i>0 && res[i]==res[i-1]+1){
                seq++;
            }else{
                seq=1;
            }
            
            ans=max(ans,seq);
        }
        
        return ans;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends

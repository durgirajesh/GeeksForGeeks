class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int sum)
    {
        
        int cursum=arr[0],start=0;
        vector<int> vect;
        
        for(int i=1;i<=n;i++)
        {

            while(cursum > sum && start < i-1){
                
                cursum=cursum-arr[start];
                start++;
            }
            
            if(cursum==sum){
                vect.push_back(start+1);
                vect.push_back(i);
                break;
            }
            
            if(i<n){
                cursum+=arr[i];
            }
        }
        
        if(cursum!=sum){
            vect.push_back(-1);
        }
        return vect;
    }
};

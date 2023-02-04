class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    if(n<1)
	        return 0;

        if(n==1)
            return arr[0];

         if(n>=2)
         {
             arr[1]=max(arr[0],arr[1]);
         }
    
         for(int i=2;i<n;i++)
    
         {
             arr[i]=max(arr[i]+arr[i-2],arr[i-1]);
         }

     return arr[n-1];
	}
};

class Solution {
	public:
		int CountWays(string str){
		    // Code here
		    int mod = 1e9+7;
            int n = str.size();
            int curr=0, prev[2]={0};
            if(str[0]!='0') 
		           prev[0] = prev[1] = 1;
            
            for(int i=1;i<=n;i++)
            {
                int single = 0;
                if(str[i-1]!='0')
                    single = prev[1];
                
                int doubles = 0;
                if((str[i-2]=='1') or (str[i-2]=='2' && str[i-1]<='6'))
                    doubles = prev[0]; 
                
                curr = (single+doubles)%mod;
                prev[0] = prev[1];
                prev[1] = curr;
                
            }
            return prev[1];
		}

};

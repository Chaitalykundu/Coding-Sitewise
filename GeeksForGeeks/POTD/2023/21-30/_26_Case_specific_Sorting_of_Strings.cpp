class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string up="", lo="", ans;
       for (int i=0; i<n; i++){
           if (str[i]>='A' && str[i]<='Z'){
               up+=str[i];
           }
           else{
               lo+=str[i];
           }
       }
       sort(up.begin(), up.end());
       sort(lo.begin(), lo.end());
       int u=0, l=0;
       for (int i=0; i<n; i++){
           if (str[i]>='A' && str[i]<='Z'){
               ans+=up[u++];
           }
           else{
               ans+=lo[l++];
           }
       }
       return ans;
    }
};

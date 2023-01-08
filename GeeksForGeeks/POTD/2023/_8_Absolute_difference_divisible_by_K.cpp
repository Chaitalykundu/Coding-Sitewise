class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
         long long count = 0;

        for(int i=0;i<n;i++){

            arr[i]=(arr[i]+k)%k;

        }

        int brr[k] = {0};

        for(int i=0;i<n;i++){

            brr[arr[i]]++;

        }

        for(int i=0;i<k;i++){

            count+=(brr[i]*(brr[i]-1))/2;

        }

        return count;
    }
};

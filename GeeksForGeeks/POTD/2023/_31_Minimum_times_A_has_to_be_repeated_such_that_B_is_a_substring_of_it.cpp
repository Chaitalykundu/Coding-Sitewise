class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
          int i=0,j=0,k=0,cnt=0;

        while(k<(int)A.size()) {

            if(j==(int)B.size()) {

                break;

            }

            if(A[i]==B[j]) {

                i++;

                j++;

            }

            else {

                j=0;

                k++;

                i=k;

            }

            if(i==(int)A.size()) {

                i=0;

                cnt++;

            }

        }

        if(i==0) cnt--;

        if(j==(int)B.size()) {

            return cnt+1;

        }

        return -1;
    }
};

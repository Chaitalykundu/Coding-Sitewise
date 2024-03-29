class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<N;i++){
            pq.push(arr[i]);
        }
        int sum=0;
        while(pq.size()>=2){
            int n=pq.top();
            pq.pop();
            int m=pq.top();
            pq.pop();
            sum+=m+n;
            pq.push(m+n);
        }
        return sum;
    }
};

class Solution {
    public int snakesAndLadders(int[][] board) {
        int n = board.length, end = n*n, result = 0;
    Queue<Integer> q = new LinkedList<>();
    
    q.add(1);
    
    while( !q.isEmpty() ){    
        result++;
        int size = q.size();
        
        while( size --> 0 ){
            int curr = q.poll();
            for( int i = 1; i <= 6; i++ ) {
                
                int next = curr+i;
                
                int[] rc = getRowCol(next, n);
                
                next = board[rc[0]][rc[1]]  == -1 ? next : board[rc[0]][rc[1]];
                
                if( next == -2 ) continue;
                
                if( next >= end ) return result;
                
                q.add(next);
                board[rc[0]][rc[1]] = -2;
            }
        }
    }
    return -1;
}

private int[] getRowCol(int num, int n){
    
    num--;
    
    int r = n-1-num/n, c = -1;
    
    if( ((n-1)&1) == (r&1) ){//Same parity
        c=num%n;
    }else{
        c = n-num%n-1;
    }
    return new int[]{r,c};
    }
}

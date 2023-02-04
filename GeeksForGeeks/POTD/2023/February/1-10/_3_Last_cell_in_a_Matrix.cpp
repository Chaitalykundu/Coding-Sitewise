//User function Template for C++

class Solution{
    public:
    pair<int,int> goright(vector<vector<int>> &matrix,int x,int y){

        int M = matrix.size();

        int N = matrix[0].size();

        while(matrix[x][y]==0){

            if(y==N-1){

                return {x,y};

            }

            y++;

        }

        if(matrix[x][y]==1){

            matrix[x][y]=0;

            godown(matrix,x,y);

        }

    }

    pair<int,int> goleft(vector<vector<int>> &matrix,int x,int y){

        int M = matrix.size();

        int N = matrix[0].size();

        while(matrix[x][y]==0){

            if(y==0){

                return {x,y};

            }

            y--;

        }

        if(matrix[x][y]==1){

            matrix[x][y]=0;

            goup(matrix,x,y);

        }

    }

    pair<int,int> godown(vector<vector<int>> &matrix,int x,int y){

        int M = matrix.size();

        int N = matrix[0].size();

        while(matrix[x][y]==0){

            if(x==M-1){

                return {x,y};

            }

            x++;

        }

        if(matrix[x][y]==1){

            matrix[x][y]=0;

            goleft(matrix,x,y);

        }

    }

    pair<int,int> goup(vector<vector<int>> &matrix,int x,int y){

        int M = matrix.size();

        int N = matrix[0].size();

        while(matrix[x][y]==0){

            if(x==0){

                return {x,y};

            }

            x--;

        }

        if(matrix[x][y]==1){

            matrix[x][y]=0;

            goright(matrix,x,y);

        }

    }

    public:

    pair<int,int> endPoints(vector<vector<int>>& matrix){

        return goright(matrix,0,0);
    }

};

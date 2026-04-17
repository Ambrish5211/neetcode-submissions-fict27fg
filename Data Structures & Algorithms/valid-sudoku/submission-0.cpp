class Solution {
public:
    bool isValid(vector<vector<char>> &board, int x, int y){
        char element = board[x][y];

        // check row
        for(int i=0;i<9;i++){
            if(i == x) continue;
            if(board[i][y] == element) return false;
        }

        // check col
        for(int i=0;i<9;i++){
            if(i == y) continue;
            if(board[x][i] == element) return false;
        }

        // check box
        int dx = x - (x%3);
        int dy = y - (y%3);
        for(int i=dx;i<dx+3;i++){
            for(int j=dy;j<dy+3;j++){
                if(i == x && j == y) continue;
                if(board[i][j] == element) return false;
            }
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;++i){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.' && !isValid(board, i, j)) return false;
            }
        }
        return true;
    }
};

class Solution {
public:
    bool validPlace(int row, int col, char num, vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            if (i != row && board[i][col] == num) return false;
            if (i != col && board[row][i] == num) return false;
        }
        int startRow = row - row % 3;
        int startCol = col - col % 3;
        for (int i = startRow; i < startRow + 3; i++) {
            for (int j = startCol; j < startCol + 3; j++) {
                if (i != row && j != col && board[i][j] == num) return false;
            }
        }
        return true;
    }
    
    bool solveSudokuHelper(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board.size(); j++) {
                if (board[i][j] == '.') {
                    for (char c = '1'; c <= '9'; c++) {
                        if (validPlace(i, j, c, board)) {
                            board[i][j] = c;
                            if (!solveSudokuHelper(board)) board[i][j] = '.';
                        }
                    }
                    if (board[i][j] == '.') return false;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solveSudokuHelper(board);
    }
};
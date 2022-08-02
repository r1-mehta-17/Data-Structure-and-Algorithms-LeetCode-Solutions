/*
Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
 1. Each row must contain the digits 1-9 without repetition.
 2. Each column must contain the digits 1-9 without repetition.
 3. Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
Note:
A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.
*/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
		unordered_set<char> cols[9];
		unordered_set<char> row[9];
		unordered_set<char> sqare[3][3];
		for(int i=0;i<9;i++){
			for(int j=0; j<9;j++){
				if(board[i][j] != '.'){
					if(cols[i].find(board[i][j]) != cols[i].end() || row[j].find(board[i][j]) !=row[j].end() || sqare[int(i/3)][int(j/3)].find(board[i][j]) != sqare[int(i)/3][int(j)/3].end()){
						return false;
					}
					cols[i].insert(board[i][j]);
					row[j].insert(board[i][j]);
					sqare[int(i/3)][int(j/3)].insert(board[i][j]);
				}
    		}
		}
		return true;
	}
};

/*
SAMPLE INPUT : 
[["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]]
SAMPLE OUTPUT : 
true
*/

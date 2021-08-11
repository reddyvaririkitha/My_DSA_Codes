// Given a 9*9 sudoku board, in which some entries are filled and others are 0 (0 indicates that the cell is empty), you need to find out whether the Sudoku puzzle can be solved or not i.e. return true or false.
// Input Format :
// 9 Lines where ith line contains ith row elements separated by space
// Output Format :
//  true or false
// Sample Input :
// 9 0 0 0 2 0 7 5 0 
// 6 0 0 0 5 0 0 4 0 
// 0 2 0 4 0 0 0 1 0 
// 2 0 8 0 0 0 0 0 0 
// 0 7 0 5 0 9 0 6 0 
// 0 0 0 0 0 0 4 0 1 
// 0 1 0 0 0 5 0 8 0 
// 0 9 0 0 7 0 0 0 4 
// 0 8 2 0 4 0 0 0 6
// Sample Output :
// true

bool findEmptyLocation(int grid[9][9], int &row,int &col){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(grid[i][j]==0){
                row = i;
                col = j;
                return true;
            }
        }
    }
}


bool isSafe(int grid[9][9], int row, int col, int n){
    // safe in row check
    for(int j=0;j<9;j++){
        if(grid[row][j] == n){
            return false;
        }
    }
    // safe in col check
    for(int i=0;i<9;i++){
        if(grid[i][col] == n){
            return false;
        }
    }
    // safe in the 3x3 box it belongs to check
    int boxrow = row - (row%3);
    int boxcol = col - (col%3);
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            if(grid[boxrow + i][boxcol +j] == n){
                return false;
            }
        }
    }
    return true;
}


bool sudokuSolver(int board[][9]){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Don't print output and return output as specified in the question
  */
    int row, col;
    if(!findEmptyLocation(board,row,col)){
        return true;
    }
    
    for(int i=1;i<=9;i++){
        if(isSafe(board, row, col, i)){
        	board[row][col] = i;
            if(sudokuSolver(board)){
                return true;
            }
            board[row][col] = 0;   
        }
    }
	return false;
}


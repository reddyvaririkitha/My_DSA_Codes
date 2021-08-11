

// You are given a N*N maze with a rat placed at maze[0][0]. Find and print all paths that rat can follow to reach its destination i.e. maze[N-1][N-1]. Rat can move in any direc­tion ( left, right, up and down).
// Value of every cell in the maze can either be 0 or 1. Cells with value 0 are blocked means rat cannot enter into those cells and those with value 1 are open.
// Input Format
// The first line of input contains an integer 'N' representing 
// the dimension of the maze.
// The next N lines of input contain N space-separated 
// integers representing the type of the cell.
// Output Format :
// For each test case, print the path from start position to destination position and only cells that are part of the solution path should be 1, rest all cells should be 0.

// Output for every test case will be printed in a separate line.
// Constraints:
// 0 < N < 11 0 <= Maze[i][j] <=1

// Time Limit: 1sec
// Sample Input 1 :
// 3
// 1 0 1
// 1 0 1
// 1 1 1
// Sample Output 1 :
// 1 0 0 1 0 0 1 1 1 
// Sample Output 1 Explanation :
// Only 1 path is possible

// 1 0 0
// 1 0 0
// 1 1 1
// Which is printed from left to right and then top to bottom in one line.

// Sample Input 2 :
// 3
// 1 0 1
// 1 1 1
// 1 1 1
// Sample Output 2 :
// 1 0 0 1 1 1 1 1 1 
// 1 0 0 1 0 0 1 1 1 
// 1 0 0 1 1 0 0 1 1 
// 1 0 0 1 1 1 0 0 1 
// Sample Output 2 Explanation :
// 4 paths are possible which are printed in the required format.

#include<iostream>
using namespace std;
/*
	Note:
	To get all the test cases accepted, make recursive calls in following order: Top, Down, Left, Right.
	This means that if the current cell is (x, y), then order of calls should be: top cell (x-1, y), 
	down cell (x+1, y), left cell (x, y-1) and right cell (x, y+1).
*/  

void solvemaze(int maze[][20], int soln[][20], int x, int y, int n){
	
    // out of maze condition
    if(x>=n || y>=n || x<0 || y<0){
        return;
    }
//     path is blocked condition
    if(maze[x][y]== 0){
        return;
    }
//     already in the traced path
    if(soln[x][y]==1){
        return;
    }
    
	  //     if it reached destination, then print
    if(x==n-1 && y == n-1){
        soln[x][y]=1;
        for(int i=0; i<n;i++){
            for(int j=0;j<n;j++){
                cout<<soln[i][j]<<" ";
            }
        }
        cout<<endl;
        soln[x][y] = 0;
        return;
    }
    
    soln[x][y]=1;
    solvemaze(maze, soln, x-1, y ,n);
    solvemaze(maze, soln, x, y-1 ,n);
    solvemaze(maze, soln, x+1, y ,n);
    solvemaze(maze, soln, x, y+1 ,n);
    soln[x][y] = 0;
    
}


void ratInAMaze(int maze[][20], int n){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Print output as specified in the question
  */
	int soln[20][20];
    // memset(soln, 0 ,n*n*sizeof(int));
    for(int i=0; i<20;i++){
        for(int j=0;j<20;j++){
            soln[i][j]=0;
        }
    }
    solvemaze(maze, soln, 0,0,n);

}

int main(){

  int n; 
  cin >> n ;
  int maze[20][20];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> maze[i][j];
        }		
  }
  ratInAMaze(maze, n);
}



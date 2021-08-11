// You are given N, and for a given N x N chessboard, find a way to place N queens such that no queen can attack any other queen on the chess board. A queen can be killed when it lies in the same row, or same column, or the same diagonal of any of the other queens. You have to print all such configurations.
// Input Format :
// Line 1 : Integer N
// Output Format :
// One Line for every board configuration. 
// Every line will have N*N board elements printed row wise and are separated by space
// Note : Don't print anything if there isn't any valid configuration.
// Constraints :
// 1<=N<=10
// Sample Input 1:
// 4
// Sample Output 1 :
// 0 1 0 0 0 0 0 1 1 0 0 0 0 0 1 0 
// 0 0 1 0 1 0 0 0 0 0 0 1 0 1 0 0 

#include<iostream>
using namespace std;


int board[500][500];

bool isPossible(int n, int col, int row){
   for(int i=0;i<col;i++)
    {
        if(board[row][i]==1)
        {
            return false;
        }
    }
    for(int i=row,j=col;i>=0&&j>=0;i--,j--)
    {
        if(board[i][j]==1)
        {
            return false;
        }
    }
    for(int i=row,j=col;i<n&&j>=0;i++,j--)
    {
        if(board[i][j]==1)
        {
            return false;
        }
    }
    return true;
}

void nQueenHelper(int n, int col){
    if(col ==n){
        //base case- queen reached to the end of board. So print the matrix.
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<<" ";
            }
            // cout<<",";
        }
        cout<<endl;
    }
    
    //Check for placing in all possible positions and move to the smaller problem.
    for(int i=0;i<n;i++){
        if(isPossible(n,col,i)){
            board[i][col] = 1;
            nQueenHelper(n, col+1);
            board[i][col] = 0;
        }
    }
    return;
}

void placeNQueens(int n){

    for(int i=0;i<11;i++){
        for(int j=0;j<11;j++){
            board[i][j] = 0;
        }
    }
	nQueenHelper(n,0);

}

int main(){

  int n; 
  cin >> n ;
  placeNQueens(n);

}


/*
For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to print in the order followed for every iteration:
a. First row(left to right)
b. Last column(top to bottom)
c. Last row(right to left)
d. First column(bottom to top)
 Mind that every element will be printed only once.
 Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

Second line onwards, the next 'N' lines or rows represent the ith row values.

Each of the ith row constitutes 'M' column values separated by a single space.
Output format :
For each test case, print the elements of the two-dimensional array/list in the spiral form in a single line, separated by a single space.

Output for every test case will be printed in a seperate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
0 <= M <= 10^3
Time Limit: 1sec
Sample Input 1:
1
4 4 
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16
Sample Output 1:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
Sample Input 2:
2
3 3 
1 2 3 
4 5 6 
7 8 9
3 1
10
20
30
Sample Output 2:
1 2 3 6 9 8 7 4 5 
10 20 30 
*/

#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here0
    int rs=0,re=nRows-1,cs=0,ce=nCols-1;//rs=row start, re=row end, cs=column start, ce=column end    nCols=3=nRows
    int i=rs,j;
    while(rs<=re && cs<=ce){
    	for(j=cs;j<=ce;j++)//00,01,02	j=0 to 2,i=0
     		cout<<input[i][j]<<' ';
        j--;//j=2
        rs++; //rs=1
        for(i=rs;i<=re;i++)//12,22	i=1 to 2,j=2
            cout<<input[i][j]<<' ';
        i--;//i=2
        ce--;//ce = 1
        for(j=ce;j>=cs;j--)//21,20	j=1 to 0,i=2
            cout<<input[i][j]<<' ';
        j++;//j=0
        re--;//re =1
        for(i=re;i>=rs;i--)//10	i=1 to 1,j=0
            cout<<input[i][j]<<' ';
        i++;//i=1
        cs++; //cs=1   
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}

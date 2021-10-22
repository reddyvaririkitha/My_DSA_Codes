// https://www.geeksforgeeks.org/minimum-lines-cover-points/#:~:text=If%20given%20points%20are%20(%2D,as%20shown%20in%20below%20diagram.
// C++ program to get minimum lines to cover
// all the points
#include <bits/stdc++.h>
using namespace std;

int minLinesToCoverPoints(int points[][2], int N)
{
	
    set <float> slopes;
	int minLines = 0;
    
	for (int i = 0; i < N; i++)
	{
	
		cout<<"i= "<<i<<endl;
		int curX = points[i][0];
		int curY = points[i][1];
        cout<<"\tcurX = "<<curX<<" curY = "<<curY<<endl;

        float slope = (curY-yO)/(curX-xO) ;
        cout<<"\tslope = "<<slope<<endl;
        if(slopes.find(slope) == slopes.end()){
            cout<<slope<<endl;
            slopes.insert(slope);
            minLines++;
        }
        
        cout<<"\tlines = "<<minLines<<endl;
		
	}

	return minLines;
}

// Driver code to test above methods
int main()
{
	int xO, yO;
	xO = 3;
	yO = 2;

	int points[][2] =
	{
		{2, 1},
		{3, 2},
		{4, 1},
		{1, 4},
		{2, 3},
		{4, 3},
		{5, 4},
		{5, 0}
	};

	int N = sizeof(points) / sizeof(points[0]);
	cout << minLinesToCoverPoints(points, N);
	return 0;
}

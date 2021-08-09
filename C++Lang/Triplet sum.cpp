#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int tripletSum(int *a, int n, int num)
{
    sort(a,a+n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        int j=i+1;
        int k=n-1;
        int x=num-a[i];
        while(j<k)
        {       
            if(a[j]+a[k] == x)
            {
                if(a[j] == a[k])
                {
                    int x = k-j+1;
                    count+=(x*(x-1))/2;
                    break;
                }
                else 
                {
                    int x = 1;
                    int y= 1;
                    while( a[j+1]==a[j] && j+1 != k) 
                    {
                        x++;
                        j++;
                    }
                    while(a[k-1]==a[k] && k-1 !=j)
                    {
                        k--;
                        y++;
                    }
                    count+=(x*y);
                    k--;
                    j++;
                }

            }	

            else if(a[j]+a[k]<x){
                j++;
            }
            else if(a[j]+a[k]>x){
                k--;
            }


        }
    }

    return count;
    //Write your code here
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}

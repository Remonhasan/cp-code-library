/* Author : Remon Hasan
   Concept: Chinese Reminder Theorem [concept 1]
   University of Asia Pacific
*/
#include<bits/stdc++.h>
using namespace std;

int find(int n[], int r[], int k)
{
	int x=1;
	while(true)
	{
		int i;
		for(i=0;i<k;i++)
		{
			if(x%n[i]!=r[i])
				break;
		}
		if(i==k)
			return x;
		x++;
	}
	return x;
}


int main ()
{
	int n[]={3,4,5}; // number array -> x -> n[0]%3 = 2 , n[1]%4=3 , n[2]%5 = 1
	int r[]={2,3,1}; // reminder array
	int k = sizeof(n)/sizeof(n[0]);
	cout<<"x is"<<find(n,r,k);
	return 0;
}

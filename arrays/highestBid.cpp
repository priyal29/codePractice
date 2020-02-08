#include<iostream>
using namespace std;

int highestBid(int arr[][2], int end)
{
	int bid = arr[0][1], id[end] = {0}, c =0,res=arr[0][0];
	for(int i=0; i< end; i++){
		for(int j=1; j<2; j++){
			if( arr[i][j] >= bid && arr[i][0] != id[c]){
				bid = arr[i][j];
				id[c] = arr[i][0];
				c++;
			}
		}
	}

	res = id[0];
	for(int i=0; i<c; i++)
	{
		if(id[i] < res)
			res = id[i];
	}

	return res;
}

int main()
{
	int n=5;
	int a[n][2] = { {3,15},
			{10,18},
			{1,18},
			{2,10},
			{4, 15}};
	int res = highestBid(a,n);
	cout << "highest bid is done by id = " << res << "\n";
	return 0;	
}

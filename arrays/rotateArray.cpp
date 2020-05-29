/*Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 

Input:
The first line of the input contains T denoting the number of testcases. First line of eacg test case contains two space separated elements, N denoting the size of the array and an integer D denoting the number size of the rotation. Subsequent line will be the N space separated array elements. */

#include<iostream>
#include<limits>
using namespace std;

void rotateArray(int arr[], int end, int r)
{
	int temp[r];
	int j = r;
	int i = 0;
	for(int i=0; i<r; i++)
		temp[i] = arr[i];

	while( i<end-r){
		arr[i] = arr[j];
		i++;
		j++;

	}

	int k = 0;
	while(k < r && i < end){
		arr[i] = temp[k];
		k++;
		i++;
	}
}

int main()
{
	int n=7;
	int x=2;
	int arr[7] = {1,2,3,4,5,6,7};
	//cout << "total elements = " << endl;
	//cin>>n; //cin.clear(); cin.ignore();
	//cout << "rotate element= ";
	//cin>>x;
//	cout << "araay elements: \n";
	//for(int i=0; i<n; i++)
	//	cin >> arr[i];
	rotateArray(arr,n,x);
	cout << "output is: \n";
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << "\n";
	return 0;
}

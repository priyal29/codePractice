#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
	int pivot = arr[end];
	int pIndex=  start;
	for(int i=start; i<end; i++){
		if(arr[i] <= pivot){
			swap(arr[i],arr[pIndex]);		
			pIndex=pIndex+1;
		}
	}
	swap(arr[pIndex], arr[end]);
	return pIndex;
}

void quickSort(int arr[], int start, int end)
{
	int pIndex;
	if(start < end){
		pIndex = partition(arr,start,end);
		quickSort(arr,start,pIndex-1);
		quickSort(arr,pIndex+1,end);
	}
}

int main()
{
#if 0
	int arr[] = {7,2,1,6,8,5,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,n-1);
	cout << "sorted array : ";
	for(int i=0; i<n; i++)
		cout << arr[i] << "" ;
	cout << "\n";
#endif
	int n;
	int arr[n];
	cout << "total elements :\n";
	cin >> n;
	cout << "elements are:\n";
	for(int i=0; i<n; i++)
		cin>>arr[i];
	quickSort(arr,0,n-1);
        cout << "sorted array : ";
        for(int i=0; i<n; i++)
                cout << arr[i] << " " ;
        cout << "\n";

	return 0;
}

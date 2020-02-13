#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
	int size = end-start+1, temp[size];
	int i = start, j = mid+1, k=0;

	while(i<=mid && j<=end){
		if(arr[i] <= arr[j]){
			temp[k] = arr[i];
			i+=1;
			k+=1;
		}else{
			temp[k] = arr[j];
			j+=1;
			k+=1;
		}
	}

	while(i <= mid){
		temp[k] = arr[i];
		i+=1;
		k+=1;
	}
	while(j <= end){
		temp[k] = arr[j];
		j+=1;
		k+=1;
	}

	for(int i=start; i<=end; i++)
		arr[i] = temp[i-start];
}

void mergeSort(int arr[], int start, int end)
{
	int mid = (start+end)/2;
	if(start < end){
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	int n, a[n];
	cout<<"total elements= \n";
	cin >> n;
	cout<<"elements are= \n";
	for(int i=0; i<n; i++)
		cin >> a[i];
	mergeSort(a,0,n-1);
	cout << "sorted array:\n";
	for(int i=0; i<n; i++)
		cout << a[i];
	return 0;
}

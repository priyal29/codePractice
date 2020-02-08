#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sortElements(int arr[], int end)
{
	int zeroC =0, oneC = 0, twoC = 0;
	for(int i=0; i<=end; i++){
		if(arr[i] == 0){
			zeroC++;
		}else if(arr[i] == 1){
			oneC++;
		}else if(arr[i] == 2){
			twoC++;
		}
	}

	int i = 0;
	while(zeroC > 0){
		arr[i] = 0;
		i++;
		zeroC--;
	}
	while(oneC > 0){
                arr[i] = 1;
                i++;
                oneC--;
        }
	while(twoC > 0){
                arr[i] = 2;
                i++;
                twoC--;
        }
}

int main()
{
	int n, a[n];
	cout << "total elements= \n";
	cin >> n;
	cout << "elements are: \n";
	for(int i=0; i<n; i++)
		cin >> a[i];
	sortElements(a,n-1);
	cout << "sorted array: \n";
	for(int i=0; i<n; i++)
		cout << a[i];
	return 0;
}

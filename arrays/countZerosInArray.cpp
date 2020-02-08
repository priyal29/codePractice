#include<iostream>
using namespace std;

int countZeros(int arr[], int start, int end)
{
	int count = 0, res = -1;
	if(arr[start] == 0 && arr[end] == 0){
		res = end + 1;
	}else if(arr[start] == 1 && arr[end] == 1){
		res = 0;
	}else if(arr[start] == 1 && arr[end] == 0){
		for(int i=start; i<=end; i++){
			if(arr[i] == 0){
				res = end  - i + 1;
				break;
			}
		}
	
	}else{
		res = 0;
	}
	return res;
}

int main()
{
	int testcases, n, a[n];
	cout << "testcase = ";
	//while(testcases--){
		cin >> testcases;
		cout << "total elements= " << "\n";
		cin >> n;
		cout << "elements are:" << "\n";
		for(int i=0;i<n;i++)
			cin >> a[i];
		int res = countZeros(a, 0, n-1);
		cout << "number of zeros in array = " << res << "\n";
	//}		
	return 0;
}

#include<stdio.h> 
#include<iostream>

using namespace std;

#if 0
//early version
int main()
{
	int n, a[20];
	scanf("%d",&n);
	for(int i=0;i<n-1;i++){
		scanf("%d", &a[i]);
	}	

	int sum=0, seriesSum =0;
	for(int i=0;i<n-1;i++){
                sum = sum+a[i];
        }
	seriesSum = (n*(n+1))/2;
	cout << "total is = " << sum << "\n";
	int missingNum = seriesSum-sum;
	cout << "result = " << missingNum << "\n";
	return 0;
}
#endif

int findNum(int arr[], int n)
{
    int low = 0, high = n-1, mid = 0;
    while(low <= high){
        mid = low + (high-low)/2;
        if(arr[mid]-mid > 1)
            high = mid+1;
        else
            low = mid;
    }
    return low;
}

int main() {
	int n;
//	cout << "enter no. of elements" << endl;
//	cin >> n;
	int arr[] = {1,2,3,4,6,7,8};
	n = sizeof(arr)/sizeof(arr[0]);
//	cout << "elements" << endl;
//	for(int i=0; i<n; i++){
//	    cin >> arr[i];
//	}
	int num = findNum(arr, n);
	cout << "missing number is " << arr[num]-1 << endl;
	return 0;
}


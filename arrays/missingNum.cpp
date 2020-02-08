#include<stdio.h> 
#include<iostream>

using namespace std;

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


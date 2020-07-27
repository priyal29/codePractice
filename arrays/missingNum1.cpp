#include <iostream>
using namespace std;

int findNum(int arr[], int n)
{
    int low = 0, high = n-1, mid = 0;
    while((high - low) > 1){
        mid = low + (high-low)/2;
        
        if(arr[low]-low != arr[mid] - mid)
		high = mid;
            
        else if(arr[high]-high != arr[mid]-mid)
            low = mid;
    }
    return (arr[mid]+1);
}

int main() {
	#if 0
	cout << "enter no. of elements" << endl;
	cin >> n;
	int arr[n];
	cout << "elements" << endl;
	for(int i=0; i<n; i++)
	    cin >> arr[i];
	#endif
	int arr[] = {1, 2, 3, 5, 6, 7, 8}; 
        int n = sizeof(arr)/sizeof(arr[0]);
	int num = findNum(arr, n);
	cout << "missing number is " << num << endl;
	return 0;
}

/*logic:
1. think it as two partitions, sorted and unsorted.
when we start, we should have 1st element as sorted and every other as unsorted. As we go on we need to insert elements such that we increase our sorted partition till array size and all elements are sorted.
2. Take a key element and compare it with left side of element, till the key element get its correct place, shift every element. copy i.e. insert key in sorted place
*/
#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& a)
{
	int j = 0, key = 0;
	for(int i=1; i<a.size(); i++)
	{	
		key = i;
		j = i-1;
		while(j>=0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}

int main()
{
	int n;
	cout << "enter total array elements : " << endl;
	cin >> n;
	vector<int> arr (n,0);
	cout << "elements :" << endl;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	insertionSort(arr);
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}

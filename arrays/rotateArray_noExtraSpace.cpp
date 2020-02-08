/*Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 

Input:
The first line of the input contains T denoting the number of testcases. First line of eacg test case contains two space separated elements, N denoting the size of the array and an integer D denoting the number size of the rotation. Subsequent line will be the N space separated array elements. */

#include<iostream>
#include<limits>
using namespace std;

void rotateArray(int arr[], int end, int r)
{
        int temp;
        for(int k=0; k<r; k++){
		temp = arr[0];
		for(int i=0; i<end; i++){
			arr[i] = arr[i+1];
		}
		arr[end-1] = temp;
	}
}

int main()
{
        int n=10;
        int x=5;
        int arr[10] = {1,2,3,4,5,6,7,8,9,10};
        //cout << "total elements = " << endl;
        //cin>>n; //cin.clear(); cin.ignore();
        //cout << "rotate element= ";
        //cin>>x;
//      cout << "araay elements: \n";
        //for(int i=0; i<n; i++)
        //      cin >> arr[i];
        rotateArray(arr,n,x);
        cout << "output is: \n";
        for(int i=0; i<n; i++)
                cout << arr[i] << " ";
        cout << "\n";
        return 0;
}


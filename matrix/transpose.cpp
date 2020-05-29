#include<iostream>
using namespace std;
#define N 3
#define INPLACE
void transposeMatrix(int a[][N], int b[][N])
{
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			b[j][i] = a[i][j];
		}
	}
}

#ifdef INPLACE
void transposeMatrix(int a[][N])
{
        for(int i=0; i<N; i++){
                for(int j=i+1; j<N; j++){
                        swap(a[i][j], a[j][i]);
                }
        }
}
#endif

int main()
{
	int b[N][N] = { {1,2,3},
		      {4,5,6},
		      {7,8,9}};
#ifndef INPLACE
	int a[N][N];
	transposeMatrix(a, b);
#endif
	transposeMatrix(b);
	cout << "output: \n";
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++)
			cout << b[i][j] << " ";
	cout << "\n";
	}
	return 0;
}

#include<iostream>

using namespace std;

void spiralTraverse(int m, int n, int matrix[][3])
{
	int dir = 0;
	int T=0, B=m-1, L=0, R=n-1;

	while(T<= B && L<= R){
		if(dir == 0){
			for(int i=L; i<=R; i++)
				cout << matrix[T][i] << " ";
			T++;
		}
		else if(dir == 1){
			for(int i=T; i<=B; i++)
				cout << matrix[i][R] << " ";
			R--;
		}
		else if(dir == 2){
			for(int i=R; i>=L; i--)
				cout << matrix[B][i] << " ";
	       		B--;	
		}
		else if(dir == 3){
			for(int i=B; i>=T; i--)
				cout << matrix[i][L] << " ";
			L++;
		}
		dir = (dir+1)%4;
	}
}

int main()
{
	int m,n;
	cout << "enter m = \n";
	cin >> m;
	cout << "enter n = \n";
	cin >> n;
	int matrix[m][3];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> matrix[i][j];
		}
	}
	spiralTraverse(m, n, matrix);
}

#include<stdio.h>
#include<stdlib.h>
int* plusOne(int* A, int n1, int *len1) {
    len1 = (int *) malloc (n1 * sizeof(int));
    int carry =0;
    int i;
    for(i=n1-1; i>=0; i--){
        if(i == n1-1){
            len1[i] = A[i] + 1;
        }else{
            len1[i] = A[i];
        }
        len1[i] += carry;
        if(len1[i] > 9){
            carry = 1;
            len1[i] = len1[i] % 10;
        }else{
            carry = 0;
            len1[i] = len1[i];
        }
    }
/*    int j=0;
    for(j=0; j<n1; j++)
      printf("op : %d\n", len1[j]);*/
    return len1;
}

int main()
{
	int A[3] = {1,2,9};
	int *B, *c;
	c = plusOne(A,3,B);
	for(int i=0; i<3; i++)
		printf("%d ", c[i]);
	return 0;
}

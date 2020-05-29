/* Given a positive integer, check if the number is prime or not. A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Examples of first few prime numbers are {2, 3, 5, etc.. } */

#include<iostream>
using namespace std;

bool primeNum(int n)
{
	if(n<=1)
		return false;

	for(int i=2; i<n; i++){
		if(n%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	cout << "enter number: \n";
	cin >> n;
	bool res = primeNum(n);
	if(res == true)
		cout << "number is prime\n";
	else
		cout << "number is not prime\n";
	return 0;

}

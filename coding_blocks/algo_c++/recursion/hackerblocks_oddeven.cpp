/*
Take as input N, a number. Print odd numbers in decreasing sequence (up until 0) and even numbers in increasing sequence (up until N) using Recursion

Input Format
Constraints
1 <= N <=1000


Output Format
Sample Input
5
Sample Output
5
3
1
2
4
*/

#include<iostream>
using namespace std;

void odd_even(int n){
	if (n == 0){
		return;
	}

	if(n&1){
		cout << n << "\n";
	}
	odd_even(n-1);
	if(n%2==0){
		cout << n << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	odd_even(n);
	return 0;
}
#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N;
	int arr[N];

	for(int i=0; i<N; i++){
		cin >> arr[i];
	}

	int max_no = arr[0];
	for (int i=0; i<N; i++){
		if (arr[i] > max_no){
			max_no = arr[i];
		}
	}
	cout << max_no << "\n";

	return 0;
}
#include<iostream>
using namespace std;

void wavePrint(int arr[][10], int m, int n){
    for(int j=0; j<n; j++){
        if (j%2 == 0){
            for(int i=0; i<m; i++){
                cout << arr[i][j] << ", ";
            }  
        }
        else{
            for(int i=0; i<m; i++){
                cout << arr[m-i-1][j] << ", ";
            }  
        }
    }
    cout << "END" << "\n";
}

int main() {
	int m, n;
	cin >> m >> n;
	int arr[10][10];
	// take input
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j];
		}
	}

    for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout << arr[i][j] << " ";
		}
        cout << "\n";
	}

	wavePrint(arr, m, n);

	return 0;
}
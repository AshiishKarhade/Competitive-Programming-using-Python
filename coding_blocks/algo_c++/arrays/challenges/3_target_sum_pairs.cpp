#include<iostream>
using namespace std;


int main() {

    int N;
    cin >> N;
    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;

    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if (arr[j] == (target - arr[i])){
                if(arr[i] > arr[j]){
                    cout << arr[j] << " and " << arr[i] << "\n";
                }
                else{
                    cout << arr[i] << " and " << arr[j] << "\n";
                }
            }
        }
    }


	return 0;
}
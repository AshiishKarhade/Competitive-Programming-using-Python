#include <iostream>
using namespace std;

void binary_search(int arr[], int i, int j, int k){
    int mid = i + (j-1)/2;
    if (j < 1){
        return;
    }
    if (arr[mid] == k){
        cout << "FOUND" << "\n";
        return;
    }
    else if(arr[mid] > k){
        binary_search(arr, 1, mid-1, k);
    }
    else{
        binary_search(arr, mid+1, j, k);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;
    binary_search(arr, 0, n, key);
    return 0;
}

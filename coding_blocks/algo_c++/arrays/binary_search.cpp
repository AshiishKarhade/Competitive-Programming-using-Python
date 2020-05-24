#include <iostream>
#include <algorithm>
using namespace std;

bool binary_search(int arr[], int n, int key){
    // binary search
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = (start+end)/2;

        if(key == arr[mid]){
            return true;
        }
        else if (arr[mid] > key){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return false;
}

int main(){

    int n;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);
    int key;
    cout << "Enter a key: ";
    cin >> key;

    bool index = binary_search(arr, n, key);

    if (index){
        cout << "Key is present" << "\n";
    }
    else{
        cout << "key is not present" << "\n";
    }

    return 0;
}
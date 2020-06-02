#include <iostream>
using namespace std;

// EASY TO UNDERSTAND
int lastOccurence(int arr[], int i, int n, int key){
    if(i<0){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }
    return lastOccurence(arr, i-1, n, key);
}

int main(){
    
    int n;
    cin >> n;
    int arr[n];
    
    for(unsigned i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    cout << lastOccurence(arr, n-1, n, key) << endl;
    
    return 0;
}

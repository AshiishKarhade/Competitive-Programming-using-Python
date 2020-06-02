#include <iostream>
using namespace std;

int firstOccurence(int *a, int n, int key){
    // base case
    if (n==0){
        return -1;
    }
    // recursive case
    if(a[0] == key){
        return 0;
    }
    int i = firstOccurence(a+1, n-1, key);
    if(i == -1){
        return -1;
    }
    return i+1;
}

// EASY TO UNDERSTAND
int linearSearch(int arr[], int i, int n, int key){
    if(n==i){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }
    return linearSearch(arr, i+1, n, key);
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

    cout << firstOccurence(arr, n, key) << endl;
    cout << linearSearch(arr, 0, n, key) << endl;
    
    return 0;
}

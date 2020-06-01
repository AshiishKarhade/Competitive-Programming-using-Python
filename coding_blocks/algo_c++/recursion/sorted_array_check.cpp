#include <iostream>
using namespace std;

bool isSorted(int arr[], int n){
    // base case
    if (n==0 or n==1){
        return true;
    }
    // recursive case
    if(arr[0] < arr[1] and isSorted(arr+1, n-1)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << isSorted(arr, n) << "\n";
    
    return 0;
}

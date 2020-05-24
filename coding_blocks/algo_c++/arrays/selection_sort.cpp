#include <iostream>
using namespace std;

void selection_sort(int arr[], int size){

    for(int i=0; i<size-1; i++){
        int min_idx = i;
        for(int j=i; j<size-1; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}



int main(){

    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i<n; i++){
        cin >> arr[i];
    }

    //before sorting
    for(int i=0; i<n; i++){
        cout << arr[i] << ", ";
    }
    cout << "\n";

    selection_sort(arr, n);

    // after sorting

    for(int i=0; i<n; i++){
        cout << arr[i] << ", ";
    }


    return 0;
}
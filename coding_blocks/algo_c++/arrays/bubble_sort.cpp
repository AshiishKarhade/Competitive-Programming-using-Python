#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){

    for(int itr=0; itr<n-1; itr++){

        // pairwise swapping
        for(int j=0; j<(n-itr-1) ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
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

    bubble_sort(arr, n);

    // after sorting

    for(int i=0; i<n; i++){
        cout << arr[i] << ", ";
    }


    return 0;
}
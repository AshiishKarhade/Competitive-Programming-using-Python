#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i< n; i++){
        cin >> arr[i];
    }
    int largest = arr[0];
    int smallest = arr[0];

    for(int i=0; i<n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    cout << "The largest no. is: " << largest << " and the smallest no. is: " << smallest << endl;
    return 0;
}
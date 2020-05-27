#include <iostream>
using namespace std;

// worst function to print max sum subarry

void max_subarray(int arr[], int n){
  int curr_sum;
  int max_sum = 0;
  for(int i=0; i<n; i++){
    for(int j=1; j<n; j++){

      curr_sum = 0;
      for(int k=i; k<=j; k++){
          curr_sum += arr[k];
      }
      max_sum = max(max_sum, curr_sum);
    }
  }
  cout << "The O(n^3) soln gives: " << max_sum << endl;
}


int main() {

  int n;
  cin >> n;

  int arr[n];
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  max_subarray(arr, n);

  return 0;
}

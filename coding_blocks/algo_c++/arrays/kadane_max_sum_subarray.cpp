#include <iostream>
using namespace std;

// worst function to print max sum subarry

void kadanes(int arr[], int n){
  int curr_sum = 0;
  int max_sum = 0;
  for (int i=0; i<n ; i++){
    curr_sum = curr_sum + arr[i];

    if (curr_sum<0){
       curr_sum = 0;
    }
    max_sum = max(max_sum, curr_sum);
  }
   
  cout << "The Kadane's soln gives: " << max_sum << endl;
}


int main() {

  int n;
  cin >> n;

  int arr[n];
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  kadanes(arr, n);

  return 0;
}

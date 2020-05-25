#include <iostream>
using namespace std;

int main(){

    int rows, cols;
    cin >> rows >> cols;
    int arr[rows][cols];
    int val = 1;
    // INPUT ARRAY
    for (int i = 0; i < rows; i++) {
        /* code */
        for (int j = 0; j < cols; j++) {
            /* code */
            arr[i][j] = val;
            val += 1;
        }
    }
    cout << "\n";
// OUTPUT array
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (int col = 0; col < cols; col++) {
        /* code */
        if(col % 2==0){
            //top down print
            for(int row=0; row<rows; row++){
                cout << arr[row][col] << " ";
            }
        }
        else{
            // bottom up print
            for(int row=rows-1; row>=0; row--){
                cout << arr[row][col] << " ";
            }
        }
        //cout << "\n";
    }


    return 0;
}

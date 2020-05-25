#include <iostream>
#include <algorithm>
using namespace std;

void rotation(int a[][n], int n){
    // REVERSE EACH ROW OF THE MAtrIX
    for(int i=0; i<n; i++){
        reverse(a[i], a[i]+n);
    }

    // TAKE THE TRANSPOSE OF THE RESULTING MAtrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<j){
                swap(a[i][j], a[j][i]);
            }
        }
    }
}

int main(){
    int m;
    cin >> m;
    int arr[m][m];
    int val = 1;
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            arr[i][j] = val;
            val += 1;
        }
    }
    cout << "\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    rotation(arr, m);
    cout << "\n";

    cout << "\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }




    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;


int main(){

    int n;
    cin >> n;
    int no[n-1];
    for(int i=0; i<n-1; i++){
        cin >> no[i];
    }

    sort(no, no+n);

    int miss = no[0] - 1;

    for (int i=0; i<n-1; i++){
        if (no[i+1] != no[i]+1){
            miss = no[i] + 1;
        }
    }

    cout << miss;

    return 0;
}
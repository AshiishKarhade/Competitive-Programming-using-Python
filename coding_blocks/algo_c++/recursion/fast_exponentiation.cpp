#include <iostream>
using namespace std;

int fastPower(int a, int b){
    // base case
    if(b ==0){
        return 1;
    }
    
    //recursive case
    int smaller_ans = fastPower(a, b/2);
    smaller_ans = smaller_ans * smaller_ans; // squaring 

    if(b&1){ // if b is odd
        return smaller_ans * a;
    }
    return smaller_ans;
}

int main(){
    
    int a, b;
    cin >> a >> b;

    cout << fastPower(a, b) << endl;
    
    return 0;
}

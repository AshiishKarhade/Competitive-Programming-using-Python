#include <iostream>
using namespace std;

int exponent(int a, int b){
    if(b==0){
        return 1;
    }
    return a * exponent(a, b-1);
}

int main(){
    
    int a, b;
    cin >> a >> b;

    // a^b
    cout << exponent(a, b) << "\n"; 

    
    return 0;
}

#include <iostream>
using namespace std;

void remove_duplicates(char a[]){

    int l = strlen(a);
    if (l == 0 or l == 1){
        return;
    }

    int prev = 0;
    for(int curr=1; curr<l; curr++){
        if(a[prev] != a[curr]){
            prev++;
            a[prev] = a[curr];
        }
    }
    a[prev+1] = '\0';
    return;

}

int main(){

    char a[100];
    cin.getline(a, 100);
    remove_duplicates(a);
    cout << a << "\n";

    return 0;
}
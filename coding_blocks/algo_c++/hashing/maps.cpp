#include <iostream>
#include <map>

using namespace std;


int main(){
    
    map<string, int> mp;

    mp.insert(make_pair("Mango", 100));

    mp["Apple"] = 120;

    // searchg
    auto it = mp.find("Mango");

    cout << mp["Apple"] << endl;   
    
    return 0;
}

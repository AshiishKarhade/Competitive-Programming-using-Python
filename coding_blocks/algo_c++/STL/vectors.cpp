#include <iostream>
#include <vector>
using namespace std;


int main(){
    
    vector<int> a;
    vector<int> b(5,10); // 5 integers with 10 values
    //vector<int> c{1,23,4,5};

    //take user input
    //iterating
    for(int i=0; i<b.size(); i++){
        cout << b[i] << " ";
    }
    cout << "\n";
    //or using iterators
    for(auto it=b.begin(); it != b.end() ; it++){
        cout << (*it) << " ";
    }
    cout << "\n";
    // for each
    for(int x:b){
        cout << x << " ";
    }
    

    // functions
    /*
    1. push_back(10)
    2. pop_back()
    3. size()
    4. capacity()
    5. max_size() // depends on the system which has available memmory

    6. v.insert(position, x)
    7. v.erase(v.begin() + 3)
    
    */
    
    return 0;
}

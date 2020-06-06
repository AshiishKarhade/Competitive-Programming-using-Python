#include <iostream>
#include <stack>
using namespace std;

bool checkExpression(string s){
    stack <char> stck;
 
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '('){
            stck.push('(');
        }
        else if (s[i] == ')'){
            if(stck.empty() or stck.top()!='('){
                return false;
            }
            stck.pop();
        }   
    }
    return stck.empty();
    
}
int main(){
    string s;
    cin >> s;

    bool isValid = checkExpression(s);
    cout << isValid << "\n";
    
    return 0;
}

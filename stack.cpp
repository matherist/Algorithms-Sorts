#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;

int bracketsMatching(string& brackets) {
    stack<int> bracketsStack;
    int n = brackets.size();
    vector<int> bracketPairs(n);

    for (int i = 0; i < n; i++) {
        if (brackets[i] == '(') {
            bracketsStack.push(i);
        } else {
            if (bracketsStack.empty()) {
                bracketPairs[i] = -1;
            } else {
                bracketPairs[bracketsStack.top()] = i;
                bracketPairs[i] = bracketsStack.top();
                bracketsStack.pop();
            }
        }
    }
    if (!bracketsStack.empty()) {
        // Incorrect bracket sequence!
        while (!bracketsStack.empty()) {
            bracketPairs[bracketsStack.top()] = -1;
            bracketsStack.pop();
        }
    }
    return bracketPairs[bracketPairs.size()-1];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string n;
        cin >> n;
        int res = bracketsMatching(n);
        if(res == -1){
            cout << true << endl;
        }else{
            cout << false << endl;
        }
    }
    return 0;
}

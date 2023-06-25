/*BUBBLE SORT*/
#include <bits/stdc++.h>
using namespace std;
vector<int> sort_by_bubble(vector<int> v) {
    for(int i=0; i < v.size(); i++){
        for(int j=0; j < v.size()-1;j++){
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }
    return v;
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    vector<int> result = sort_by_bubble(arr);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}



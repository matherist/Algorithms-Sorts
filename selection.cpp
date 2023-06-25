/*SELECTION SORT*/
#include <bits/stdc++.h>
using namespace std;
vector<int> sort_by_selection(vector<int> v) {
    vector<int> sorted;
    while (v.size() > 0) {
        int index_of_min = 0;
        for (int i = 1; i < v.size(); i++) {
            if (v[i] < v[index_of_min]) {
                index_of_min = i;
            }
        }
        sorted.push_back(v[index_of_min]);
        v.erase(v.begin() + index_of_min);
    }
    return sorted;
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
    vector<int> result = sort_by_selection(arr);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}

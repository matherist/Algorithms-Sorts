#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()

using namespace std;

int binary_search(vector<int>& a, int query) {
    int left = 0;
    int right = a.size() - 1;
    while (left <= right) {
        int middle = (right + left) / 2; 
        if (a[middle] == query) {
            return middle;
        } else if (a[middle] < query) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int q;
    cin >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end()); 
    int result = binary_search(v, q);
    cout << result;
    return 0;
}

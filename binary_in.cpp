
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;


int binary_search(vector<int>& a, int query) {
    auto it = lower_bound(a.begin(), a.end(), query);
    if (it != a.end() && *it == query) {
        return it - a.begin();
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

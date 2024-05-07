#include <bits/stdc++.h>
using namespace std;

pair<int, int> solve(int x) {
    int b = 0;
    while ((1 << b) <= x) {
        b++;
    }
    int bs = 1 << (b - 1);
    int a = bs;
    int y = a ^ x; 
    return {y, a};
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        pair<int, int> ans = solve(x);
        cout << ans.first << " " << ans.second << endl;
    }
}

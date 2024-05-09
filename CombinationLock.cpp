#include <bits/stdc++.h>
using namespace std;
bool canPointToZero(int index, int current_sum, vector<int> &angles,int n) {
    if (index == n) {
        return (current_sum % 360 == 0);
    }

    return canPointToZero(index + 1, current_sum + angles[index], angles, n) ||
           canPointToZero(index + 1, current_sum - angles[index], angles, n);
}

int main() {
    int n;
    cin >> n;
    vector<int> angles(n);
    for (int i = 0; i < n; i++) {
        cin >> angles[i];
    }

    if (canPointToZero(0, 0, angles, n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}

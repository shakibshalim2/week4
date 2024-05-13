#include<bits/stdc++.h>
using namespace std;
int countBits(int x) {
    int count = 0;
    while (x) {
        count += x & 1;
        x >>= 1;
    }
    return count;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int armies[m + 1];
    for (int i = 0; i <= m; i++) {
        cin >> armies[i];
    }
    int fedor = armies[m];
    int friends = 0;
    for (int i = 0; i < m; i++) {
        int diff = fedor ^ armies[i];
        if (countBits(diff) <= k) {
            friends++;
        }
    }
    cout << friends << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll numTests;
    cin >> numTests;
    while (numTests--) {
        ll size;
        cin >> size;
        vector<ll> data(size);
        for (ll &value : data) {
            cin >> value;
        }

        sort(data.rbegin(), data.rend());

        ll requiredBoxes = 1;
        ll xorSum = data.front();

        for (ll i = 1; i < size; i++) {
            if (xorSum >= data[i]) {
                xorSum ^= data[i];
            } else {
                xorSum = data[i];
                ++requiredBoxes;
            }
        }

        cout << requiredBoxes << endl;
    }

    return 0;
}

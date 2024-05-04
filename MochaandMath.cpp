#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int result = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int tmax = 0;
                for (int k = i; k <= j; k++) {
                    int mirrorin = j - (k - i);
                    if (mirrorin < n && mirrorin >= 0) {
                        tmax = max(tmax, a[k] & a[mirrorin]);
                    }
                }
                result = min(result, tmax);
            }
        }
        cout << result << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int totalOR = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            totalOR |= a[i];
        }
        
        int minElement = totalOR;
        int sum = minElement;
        
        for (int i = 1; i < n; i++) {
            sum += 0;
        }
        
        cout << sum << endl;
    }
    return 0;
}

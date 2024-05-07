#include<bits/stdc++.h>
using namespace std;
int findMSB(int num){
    int msb = 0;
    while (num >>= 1) {
        msb++;
    }
    return msb;
}

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

        map<int, int> msb_count;
        for (int num : a) {
            int msb = findMSB(num);
            msb_count[msb]++;
        }

        long long result = 0;
        for (auto &[msb, count] : msb_count) {
            result += (long long)count * (count - 1) / 2;
        }

        cout << result << endl;
    }
}

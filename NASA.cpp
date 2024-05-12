#include <bits/stdc++.h>
using namespace std;
const int maxN = (1 << 15);
vector<int>all_pal;
void pal() {
    for(int i=0;i<maxN;i++) {
        string s = to_string(i);
        int l = s.length();
        bool is = true;
        for (int i = 0;i < (l / 2);i++) {
            if (s[i] != s[l - i - 1]) {
                is = false;
                break;
            }
        }
        if (is) {
            all_pal.push_back(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    pal();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> cnt(maxN), a;
        for (int i = 0;i < n;i++) {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }

        long long ans = n;

        for (int i = 0;i < n;i++) {
            for (int j = 0;j < all_pal.size();j++) {
                int curr = (a[i] ^ all_pal[j]);
                ans += cnt[curr];
            }
        }

        cout << (ans / 2) << '\n';
    }
    return 0;
}
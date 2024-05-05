#include <bits/stdc++.h>
using namespace std;

const int maxN = (1 << 15);
vector<int> all_palindromes;

void mark_palindrome() {
    for (int i = 0; i < maxN; i++) {
        string s = to_string(i);
        bool is_palindrome = true;
        for (int j = 0, k = s.length() - 1; j < k; j++, k--) {
            if (s[j] != s[k]) {
                is_palindrome = false;
                break;
            }
        }
        if (is_palindrome) {
            all_palindromes.push_back(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    mark_palindrome();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> cnt(maxN, 0);
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < all_palindromes.size(); j++) {
                int xor_value = (a[i] ^ all_palindromes[j]);
                if (xor_value < maxN) {
                    ans += cnt[xor_value];
                }
            }
            cnt[a[i]]--;
        }

        cout << ans << '\n';
    }
    return 0;
}

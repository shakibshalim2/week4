#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n == 1) {
            cout << "0" << endl;
            continue;
        }

        int k = 1;
        while (k <= n) {
            k <<= 1;
        }
        k >>= 1;

        cout << (k - 1) << endl;
    }
    return 0;
}

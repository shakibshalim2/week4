#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        long long d=x&-x;
        long long c=0;
        for(long long a=0;a<=x;a+=d){
            long long b=a^x;
            if(a<=b&&b<=x){
                c++;
            }
        }
        cout<<c<<endl;
    }
}

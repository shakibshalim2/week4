#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    while(n--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long result=1;
        long long p=a[0];
        for(long long i=1;i<n;i++){
            if(p>=a[i]){
            p=p^a[i];
            }
            else{
            p=a[i];
            result++;
            }
        }
        cout<<result<<endl;
    }
}
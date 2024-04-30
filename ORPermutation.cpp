#include<bits/stdc++.h>
using namespace std;
int cntSubArray(vector<int> &a,int k){
    int cnt=0;
    for(int i=0;i<=a.size()-k;i++){
        int cntOr=0;
        for(int j=i;j<i+k;j++){
            cntOr|=a[j];
        }
        if(cntOr%2!=0){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int>A(n);
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        cout<<cntSubArray(A,k)<<endl;
    }
}

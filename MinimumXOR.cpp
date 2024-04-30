#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int tXOR=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            tXOR^=a[i];
        }
        int minXOR=tXOR;
        for(int i=0;i<n;i++){
            int curXOR=tXOR^a[i];
            minXOR=min(minXOR,curXOR);
        }
        cout<<minXOR<<endl;
    }
    return 0;
}

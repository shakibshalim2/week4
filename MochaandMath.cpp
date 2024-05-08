#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        vector<int>a(t,0);
        for(int i=0;i<t;i++){
            cin>>a[i];
        }
        int result=a[0];
        for(int i=1;i<t;i++){
            result=result&a[i];
        }
        cout<<result<<endl;
    }
}
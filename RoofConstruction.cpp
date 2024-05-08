#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n; 
    while(n--){
        int t;
        cin>>t; 
        int k=0;
        while((1<<k)<t){ 
            k++;
        }
        k--; 
        int v=(1<<k)-1;
        for(int i=v;i>=0;i--){
            cout<<i<<" ";
        }
        for(int i=(1<<k);i<t;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}



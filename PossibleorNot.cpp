#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        vector<int>n(a);
        for(int i=0;i<a;i++){
            cin>>n[i];
        }
        int ans=-1;
        for(int i=0;i<a;i++){
            if((n[i]&b)==b){
                ans &=n[i];
            }
        }
cout<<((ans==b)?"YES":"NO")<<endl;
    }
}
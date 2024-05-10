#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        int x=INT_MAX;
        int y=0;
        for(int i=0;i<t;i++){
            int a;
            cin>>a;
            x&=a;
            y|=a;
        }
        cout<<y-x<<endl;
    }
}

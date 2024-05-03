#include<bits/stdc++.h>
using namespace std;
pair<int,int>s(int x){
    int bt=0;
    while((1<<bt)<=x){
        bt++;
    }
    int ms=1<<(bt-1);
    int a=ms;
    int b=a^x;
    return{b,a};
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        pair<int,int>ans=s(x);
        cout<<ans.first<<" "<<ans.second<<endl;
    }
}

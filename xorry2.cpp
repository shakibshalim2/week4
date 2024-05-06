#include<bits/stdc++.h>
using namespace std;
void Xorry(int n){

    int count=0;
    int i=1;
    while(i*2<=n){
        i*=2;
        count++;
    }
    bool flag=true;
    int ans=1;
    for(int i=count-1;i>=0;i--){
        if(n&(1<<i)){
            flag=false;
        }
        else{
            if(!flag)
                ans=ans*2;
        }
       
    }
     cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Xorry(n);
    }
}
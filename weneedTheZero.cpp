#include<bits/stdc++.h>
using namespace std;
#define ll long long int                        
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        vector<int>a(t);
        for(int i=0;i<t;i++){
            cin>>a[i];
        }
        int k=0;
        for(int i=0;i<t;i++){
            k^= a[i];
        }
        for(int i=0;i<t;i++){
            a[i]^= k;
        }
        int y=0;
        for(int i=0;i<t;i++){
            y^= a[i];
        }
        if(y==0){
            cout<<k<< endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}

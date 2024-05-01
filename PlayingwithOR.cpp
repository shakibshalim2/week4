#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        int currentOr=0;
        int oddCount=0;
        for(int i=0;i<k;i++){
            currentOr|=a[i];
        if(a[i]%2==1){
            oddCount++;
        }
        }
            if(currentOr%2==1){
                count++;
            }
            for(int i=k;i<n;i++){
                if(a[i-k]%2==1){
                    oddCount--;
                }
                if(a[i]%2==1){
                    oddCount++;
                }
                currentOr=oddCount>0?1:0;
                if(currentOr%2==1){
                    count++;
                }
            }
        cout<<count<<endl;
    }
    return 0;
}

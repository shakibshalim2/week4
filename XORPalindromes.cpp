#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans(n+1,'0');
        int mismatches=0;
        int p=0;
        for(int i=0,j=n-1;i<j;i++,j--){
            if(s[i]==s[j]){
                p+=2;
            } 
            else{
                mismatches++;
            }
        }

        for(int i=0;i<=n;i++){
            int eone=i-mismatches;
            if(eone<0){
                continue;
            }
            eone=max(eone%2,eone-p);
            eone=max(0,eone-(n%2));

            if(eone==0){
                ans[i]='1';
            }
        }
        cout<<ans<<endl;
    }
}

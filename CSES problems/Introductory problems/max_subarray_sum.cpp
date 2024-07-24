#include<bits/stdc++.h>
using namespace std;
int main(){
    string seq;
    getline(cin,seq);
    int n = seq.length();
    int ans = 1;
    int count = 1;
    char prev,curr;
    for (int i=1;i<n;i++){
        prev = seq[i-1];
        curr = seq[i];
        if (curr==prev){
            count++; 
        }else{
            count = 1;
        }
        ans = max(ans,count);
    }
    cout<<ans<<"\n";
    return 0;
}
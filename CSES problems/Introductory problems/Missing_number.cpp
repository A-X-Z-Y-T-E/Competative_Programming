#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    int arr[]={};
    cin>>n;
    int x = n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        x -= arr[i];
    }
    cout<<x;
    return 0;
}
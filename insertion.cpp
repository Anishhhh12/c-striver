#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
    int ans = arr[i];
    int j = i-1;
    while(j >=0 && arr[j] >ans){
        arr[j+1]=arr[j];
        j = j-1;
    }
    arr[j+1]=ans;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
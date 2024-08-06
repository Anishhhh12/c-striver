#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,b,c=-1;
    cin>>n;
    int A[n];
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }
    cin>>b;
    for(int i =0;i<n;i++){
        if(A[i]==b){
            c = i;
        }
        cout<<c<<endl;
    }
}